class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int hl = 0,hr = matrix[0].size()-1, vl = 0, vr = matrix.size()-1;
        
        for(int i=0; i < matrix.size(); i++){
            for(int j=0; j < matrix[i].size(); j++){
                if(target == matrix[i][j]){
                    return true;
                }
            }
        }
        
        return false;
        
        
        
        
    }
};