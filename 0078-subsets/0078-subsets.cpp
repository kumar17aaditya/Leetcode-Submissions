class Solution {
public:
    void combinations(int i, vector<vector<int>>& res, vector<int>& comb, vector<int>& nums){
        if(i>=nums.size()){
            res.push_back(comb);
            return ;
        }
        comb.push_back(nums[i]);
        combinations(i+1,res,comb,nums);
        comb.pop_back();
        combinations(i+1,res,comb,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> comb;
        combinations(0,res,comb,nums);
        return res;
    }
};