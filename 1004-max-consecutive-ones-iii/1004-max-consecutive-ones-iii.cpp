class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,len=0;
        unordered_map<int,int>zeros;
        while(r<nums.size()){
            zeros[nums[r]]++;
            while(zeros[0]>k){
                zeros[nums[l]]--;
                l++;
            }
            len=max(len,r-l+1);
            r++;
        }
        return len;
    }
};