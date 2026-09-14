class Solution {
public:
    int maxArea(vector<int>& heights) {
        int start=0;
        int end=heights.size()-1;
        int ans=0;
        while(start<end){
            int width=end-start;
            int height=min(heights[start],heights[end]);
            int area=height*width;
            ans=max(ans,area);
            heights[start]<heights[end]?start++:end--;
        }
        return ans;
    }
};
