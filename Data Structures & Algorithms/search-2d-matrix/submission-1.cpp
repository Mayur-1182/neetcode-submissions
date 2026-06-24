class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int i=0;
        int j=col-1;
        int foundRow=0;
        while(i<row){
            if(matrix[i][j]<target){
                if(i<row){
                i++;
                }else{
                    foundRow=i;
                    break;
                }
            }else if(matrix[i][j]>target){
                foundRow=i;
                break;
            }else if(matrix[i][j]==target){
                return true;
            }

        }
        for(int k=0;k<col;k++){
            if(matrix[foundRow][k]==target){
                return true;
            }
        }
        return false;
    }
};
