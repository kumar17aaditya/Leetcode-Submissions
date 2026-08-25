class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int mul=0;
        for(mul=k;;mul+=k){
            if(find(nums.begin(),nums.end(),mul)==nums.end()){
                return mul;
            }
        }
        return 0;
    }
};