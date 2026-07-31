class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int l=0,r=0;
        unordered_map<int,int>freq;
        long long maxsum=0,sum=0;
        while(r<nums.size()){
            sum+=nums[r];
            freq[nums[r]]++;
            if(r-l+1>k){
                sum -=nums[l];
                freq[nums[l]]--;
                if(freq[nums[l]]==0) freq.erase(nums[l]);
                l++;
            }
            
            if(r-l+1==k && freq.size()==k) maxsum=max(sum,maxsum);
            r++; 
        }
        return maxsum;
        
    }
};