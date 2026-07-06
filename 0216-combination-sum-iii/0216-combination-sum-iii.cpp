class Solution {
public:
    void combinations(int i, int k, int n,vector<int>& comb,vector<vector<int>>& res,vector<int>& check) {
        if(n==0 && comb.size()==k) {
            res.push_back(comb);
            return;
        }
        if(i>=check.size() || n<0 || comb.size()>k)
            return;
        // Take
        comb.push_back(check[i]);
        combinations(i+1, k, n-check[i], comb, res, check);
        comb.pop_back();
        // Not take
        combinations(i+1, k, n, comb, res, check);
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> check = {1,2,3,4,5,6,7,8,9};
        vector<vector<int>> res;
        vector<int> comb;

        combinations(0, k, n, comb, res, check);
        return res;
    }
};