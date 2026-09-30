public class Solution {
    public int MaxArea(int[] heights) {
        int start=0;
        int end=heights.Length-1;
        int ans=0;
        while(start<end){
            int length=Math.Min(heights[start],heights[end]);
            int breadth=end-start;
            int area=length*breadth;
            ans=Math.Max(ans,area);
            if(heights[start]<heights[end]){
                start++;
            }else{
                end--;
            }
        }
        return ans;
    }
}
