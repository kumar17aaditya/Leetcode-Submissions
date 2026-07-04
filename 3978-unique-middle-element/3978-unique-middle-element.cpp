class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        int mid=nums[n/2];
        int count=0;
        for(int num: nums){
            if(num==mid) count++;
        }
        return count==1;
    }
};