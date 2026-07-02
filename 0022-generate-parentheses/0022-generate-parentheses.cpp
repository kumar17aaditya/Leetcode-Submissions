class Solution {
public:
    void gen(int open, int close, vector<string> &res, string &s, int n){
        if((open==close) && (close==n)){
            res.push_back(s);
            return ;
        }
        if(open<n){
            s+='(';
            gen(open+1,close,res,s,n);
            s.pop_back();
        }
        if(close<open){
            s+=')';
            gen(open,close+1,res,s,n);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        string s="";
        gen(0,0,res,s,n);
        return res;
    }
};