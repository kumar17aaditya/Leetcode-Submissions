class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int curr=0;
        for(int i=0;i<k;i++)
            curr+=cardPoints[i];
        int ans=curr;
        for(int i=1;i<=k;i++) {
            curr-=cardPoints[k-i];
            curr+=cardPoints[n-i];
            ans=max(ans,curr);
        }
        return ans;
    }
};