class Solution {
public:

    vector<int>luckyNumbers (vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> ans;
        for(int i = 0;i < rows;i++){
            for(int j = 0;j < cols;j++){
                if(matrix[i][j]==*min_element(matrix[i].begin(),matrix[i].end())){
                    bool largest = true;
                    for(int k = 0;k < rows;k++){
                        if(matrix[k][j] > matrix[i][j]){
                            largest = false;
                        }
                    }
                    if(largest){
                        ans.push_back(matrix[i][j]
                        );
                    }
                }
            }
        }
        return ans;
    }
};
