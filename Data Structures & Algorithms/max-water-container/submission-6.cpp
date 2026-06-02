class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans=0;
        int start=0;
        int end=heights.size()-1;
        while(start<end){
            int width=end-start;
            int height=min(heights[start],heights[end]);
            int area=width*height;
            ans=max(ans,area);
            heights[start]<heights[end] ? start++: end--;
        }
        return ans;
    }

};
