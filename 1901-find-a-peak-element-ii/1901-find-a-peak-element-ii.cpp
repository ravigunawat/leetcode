class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int maxvalue =-1;
        int index =-1;
        int m = mat[0].size();
        int n=mat.size();
    int row=0;
        
        int col = m-1;
     
        
   
    col=m-1;
    while(row<=col){
        int mid = (row+col)/2;
         for(int i=0; i<n; i++){
            if(mat[i][mid]>maxvalue){
                maxvalue = mat[i][mid];
                index = i;
            }
        }
        int maxRowIndex = index;
        int left = mid-1>= 0 ? mat[maxRowIndex][mid-1]:-1;
        int right =  mid+1<m  ? mat[maxRowIndex][mid+1]:-1;
        if(mat[maxRowIndex][mid]>left && mat[maxRowIndex][mid]>right){
            return {maxRowIndex, mid};
        }
        else if (mat[maxRowIndex][mid]<left){
            col = mid-1;
        }
        else {
            row = mid+1;
        }
    }   
    return {-1,-1};
        
    }
};