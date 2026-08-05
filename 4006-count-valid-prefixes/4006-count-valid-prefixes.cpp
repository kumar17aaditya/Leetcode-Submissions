class Solution {
public:
    int countValidPrefixes(string s) {
        int ze=0;
        int one=0;
        int ans=0;
        for(char ch: s){
            if(ch=='0') ze++;
            else one++;
            if(abs(ze-one)<=1) ans++;
        }
        return ans;
    }
};