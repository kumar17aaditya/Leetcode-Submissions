class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        //so the approach would be to sort the array in ascending order based on first element and descending order based on second element and check how many intervals are covered, coz when we sort the array the first index i.e., intervals[i][0] would always in ascending order i.e., always c<=a now we have to look only at the second interval i.e., d>=b. Now we will traverse the array look at the second element of intervals if it is greater we will increase the covered value as they are not the part of the interval but if the intervals[i][1]>interval[i+1][1] that is the part of the interval so we will not count those.

        int covered=0;
        sort(intervals.begin(),intervals.end(),[](vector<int> &a, vector<int> &b){
            if(a[0]==b[0]){
                return a[1]>b[1];
            }
            return a[0]<b[0];
        });
        int maxend=0;
        for(auto &interval: intervals){
            if(interval[1]>maxend){
                covered++;
                maxend=interval[1];
            }
        }
        return covered;
    }
};
