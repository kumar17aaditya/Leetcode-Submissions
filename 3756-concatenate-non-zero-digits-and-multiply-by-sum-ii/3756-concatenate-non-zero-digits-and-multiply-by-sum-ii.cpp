class Solution {
public:
    static const int MOD = 1e9 + 7;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {

        vector<int> pos;
        vector<int> digit;

        for(char c : s){
            if(c!='0'){
                pos.push_back(pos.size()); // temporary, replaced below
            }
        }

        pos.clear();

        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                pos.push_back(i);
                digit.push_back(s[i]-'0');
            }
        }

        int k=digit.size();

        vector<long long> prefSum(k+1,0);
        vector<long long> prefVal(k+1,0);
        vector<long long> pow10(k+1,1);

        for(int i=1;i<=k;i++)
            pow10[i]=pow10[i-1]*10%MOD;

        for(int i=0;i<k;i++){
            prefSum[i+1]=prefSum[i]+digit[i];
            prefVal[i+1]=(prefVal[i]*10+digit[i])%MOD;
        }

        vector<int> ans;

        for(auto &q:queries){

            int l=q[0],r=q[1];

            auto it1=lower_bound(pos.begin(),pos.end(),l);
            auto it2=upper_bound(pos.begin(),pos.end(),r);

            if(it1==it2){
                ans.push_back(0);
                continue;
            }

            int L=it1-pos.begin();
            int R=(it2-pos.begin())-1;

            long long sum=prefSum[R+1]-prefSum[L];

            int len=R-L+1;

            long long num=
                (prefVal[R+1]
                -prefVal[L]*pow10[len])%MOD;

            if(num<0) num+=MOD;

            ans.push_back(num*sum%MOD);
        }

        return ans;
    }
};