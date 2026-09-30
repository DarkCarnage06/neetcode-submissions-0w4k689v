public class Solution {
    public bool IsValidSudoku(char[][] board) {
        int [,] gridcase=new int[9,9];
        int [,] colcase=new int[9,9];
        int [,]  rowcase=new int[9,9];
        for(int i=0;i<board.Length;i++){
            for(int j=0;j<board.Length;j++){
                if(board[i][j]!='.'){
                    int number=board[i][j]-'0';
                    int k=i/3*3+j/3;
                    if(rowcase[i,number-1]++>0||colcase[j,number-1]++>0||gridcase[k,number-1]++>0){
                        return false;
                    }
                }
            }
        }
        return true;
    }
}
