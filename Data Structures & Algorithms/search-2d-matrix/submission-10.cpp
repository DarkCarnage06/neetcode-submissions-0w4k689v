class Solution {
public:
  bool searchinrow(vector<vector<int>>& matrix,int target,int row){
    int n=matrix[0].size();
    int st=0;
    int endw=n-1;
    while(st<=endw){
      int mid=st+(endw-st)/2;
      if(target==matrix[row][mid]){
        return true;
      }else if(target>matrix[row][mid]){
        st=mid+1;
      }else{
        endw=mid-1;
      }
    }
    return false;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int start=0;
        int end=m-1;
        while(start<=end){
          int mid=start+(end-start)/2;
          if(target>=matrix[mid][0]&&target<=matrix[mid][n-1]){
            return searchinrow(matrix,target,mid);
          }else if(target>=matrix[mid][0]){
            start=mid+1;
          }else{
            end=mid-1;
          }
        }
        return false;
    }
};
