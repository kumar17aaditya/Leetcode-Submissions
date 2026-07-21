class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1;
        while(s[i]==' ' && i>=0) i--;

        int count=0;
        for(int pos=i;pos>=0;pos--){
            if(s[pos]==' ') break;
            count++;
        }
        return count;
    }
};