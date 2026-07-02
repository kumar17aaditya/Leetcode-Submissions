class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res(nums1.size(),-1);
        for(int i=0;i<nums1.size();i++){
            auto it=find(nums2.begin(),nums2.end(),nums1[i]);
            int track=it-nums2.begin();
            while(track+1<nums2.size()){
                if(nums2[track+1]>nums1[i]){
                    res[i]=nums2[track+1];
                    break;
                }
                track++;
            }
        }
        return res;
    }
};