class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum=0;
        string s=to_string(n);
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                res+=s[i];
                sum+=(s[i]-'0');
            }
        }
        if (res == "") return 0;
        long long resNum = stoll(res);
        return resNum*sum;
    }
};