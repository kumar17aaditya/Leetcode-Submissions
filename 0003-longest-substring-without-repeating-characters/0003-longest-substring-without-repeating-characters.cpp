class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,length=0;
        unordered_map<char,int> seen;
        while(r<s.size()){
            if(seen.find(s[r])!=seen.end()){
                l=max(l,seen[s[r]]+1);
            }
            seen[s[r]]=r;
            length=max(length,r-l+1);
            r++;
        }
        return length;
    }
};