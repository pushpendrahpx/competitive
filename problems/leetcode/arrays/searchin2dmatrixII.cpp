class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
              int row = 0,col = matrix[0].size()-1;
	while( col >= 0 && row < matrix.size() && col < matrix[0].size() && row >= 0){
	
		if(target == matrix[row][col]){
			return true;
		}
		
		
		if(target > matrix[row][col]){
			row++;
		}else{
			
			col--;
			// row++;
		}
	}
        
        return false;
        
        
        
    }
};