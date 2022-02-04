class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<n*m;i++){
            int row=i/n;
            int col=i%n;
            if(matrix[row][col]==target){
                return true;
            }
        }
    return false;}
};