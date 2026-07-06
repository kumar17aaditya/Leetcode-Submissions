class Solution {
public:
    void combinations(int i, int target, vector<int>& comb, vector<vector<int>>& res, vector<int>& candidates){
        if(i>=candidates.size()){
            if(target==0){
                res.push_back(comb);
            }
            return ;
        }
        if(candidates[i]<=target){
            comb.push_back(candidates[i]);
            combinations(i,target-candidates[i],comb, res, candidates);
            comb.pop_back();
        }
        combinations(i+1,target, comb, res, candidates);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> comb;
        combinations(0,target,comb,res,candidates);
        return res;
    }
};