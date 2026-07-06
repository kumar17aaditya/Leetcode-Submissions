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
            combinations(i+1, target-candidates[i], comb, res, candidates);
            comb.pop_back();
        }
        //skip all same values
        int j=i+1;
        while(j<candidates.size() && candidates[j]==candidates[i]) j++;
        combinations(j, target, comb, res, candidates);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> comb;
        combinations(0,target,comb,res,candidates);
        return res;
    }
};