class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,len=0;
        // unordered_map<int,int>zeros;
        int zeros;
        while(r<nums.size()){
            // zeros[nums[r]]++;
            if(nums[r]==0) zeros++;
            while(zeros>k){
                // zeros[nums[l]]--;
                if(nums[l]==0) zeros--;
                l++;
            }
            len=max(len,r-l+1);
            r++;
        }
        return len;
    }
};