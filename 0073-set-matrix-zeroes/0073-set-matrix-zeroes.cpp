class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> store;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    store.push_back({i,j});
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                for(auto it=store.begin();it!=store.end();it++){
                    if(it->first==i || it->second==j){
                        matrix[i][j]=0;
                    }
                }
            }
        }
    }
};