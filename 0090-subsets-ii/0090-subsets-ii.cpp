class Solution {
public:
    void combinations(int i, vector<int>& comb, vector<vector<int>>& res, vector<int>& nums){
        if(i>=nums.size()){
            res.push_back(comb);
            return ;
        }
        comb.push_back(nums[i]);
        combinations(i+1,comb,res,nums);
        comb.pop_back();
        int j=i+1;
        while(j<nums.size() && nums[j]==nums[i]) j++;
        combinations(j,comb,res,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> comb;
        combinations(0,comb,res,nums);
        return res;
    }
};