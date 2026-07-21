class Solution {
public:
    void combinations(vector<int>& temp, vector<vector<int>>& res, int sin,
                      int ein, int k) {
        if (sin > ein) {
            if (temp.size()==k) {
                res.push_back(temp);
                return;
            }
            return;
        }
        temp.push_back(sin);
        sin +=1;
        combinations(temp, res, sin, ein, k );
        temp.pop_back();
        combinations(temp, res, sin, ein, k);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> temp;
        int sin = 1;
        combinations(temp, res, sin, n, k);
        return res;
    }
};