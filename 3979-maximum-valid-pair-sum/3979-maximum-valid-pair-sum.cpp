class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        long long ans=0;
        long long maxi=nums[0];
        for(int i=k;i<nums.size();i++){
            maxi=max(maxi,(long long)nums[i-k]);
            ans=max(ans,maxi+nums[i]);
        }
        return ans;
    }
};