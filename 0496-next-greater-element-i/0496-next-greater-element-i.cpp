class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int,int>mpp;
        for(int i=nums2.size()-1;i>=0;i--){
            if(!st.empty() && nums2[i]<st.top()){
                mpp[nums2[i]]=st.top();
            }else{
                while(!st.empty() && nums2[i]>=st.top()){
                    st.pop();
                }
                if(!st.empty() && nums2[i]<st.top()){
                    mpp[nums2[i]]=st.top();
                }else{
                    mpp[nums2[i]]=-1;
                }
            }
            st.push(nums2[i]);
        }
        vector<int>res;
        for(auto nums:nums1){
            res.push_back(mpp[nums]);
        }
        return res;
    }
};