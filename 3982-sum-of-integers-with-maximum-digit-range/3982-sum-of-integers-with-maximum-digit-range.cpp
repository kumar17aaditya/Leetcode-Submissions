class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int maxrange =-1, ans=0;
        for(int x:nums){
            int c=x, mini=9,maxi=0;
            while(c){
                int d=c%10;
                mini=min(mini,d);
                maxi=max(maxi,d);
                c/=10;
            }
            int rng=maxi-mini;
            if(rng>maxrange){
                maxrange=rng;
                ans=x;
            }else if (rng==maxrange){
                ans+=x;
            }
        }
        return ans;
    }
};