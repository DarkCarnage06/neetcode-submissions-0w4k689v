class Solution {
public:
    bool searchinrow(vector<vector<int>>&matrix,int target,int row){
      int n=matrix[0].size();
      int start=0;
      int end=n-1;
      while(start<=end){
        int mid=start+(end-start)/2;
        if(target>matrix[row][mid]){
          start=mid+1;
        }else if(target==matrix[row][mid]){
          return true;
        }else{
          end=mid-1;
        }
      }
      return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int  m=matrix.size();
        int n=matrix[0].size();
        int startrow=0;
        int endrow=m-1;
        while(startrow<=endrow){
          int midrow=startrow+(endrow-startrow)/2;
          if(target==matrix[midrow][0]){
            return midrow;
          }
          else if(target>=matrix[midrow][0]&&target<=matrix[midrow][n-1]){
            return searchinrow(matrix,target,midrow);
          }
          else if(target>=matrix[midrow][0]){
            startrow=midrow+1;
          }else{
            endrow=midrow-1;
          }

        }
        return false;
    }
};
