class Solution {
public:
    int findMin(vector<int>& nums) {
        int min=nums[0];
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<min){
                min=nums[mid];
            }
            if(nums[low]<=nums[mid] && min<=nums[low]){
                low=mid+1;
            }else{
                high=mid-1;
            } 
        }
        return min;
    }
};