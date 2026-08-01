class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,len=0,maxf=0;
        unordered_map<char,int> freq;
        while(r<s.size()){
            freq[s[r]]++;
            maxf=max(maxf,freq[s[r]]);
            if(r-l+1-maxf>k){
                freq[s[l]]--;
                l++;
            }
            len=max(len,r-l+1);
            r++;
        }
        return len;        
    }
};