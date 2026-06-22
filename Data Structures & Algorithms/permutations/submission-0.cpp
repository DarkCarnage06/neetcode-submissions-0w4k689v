class Solution {
public:
void getperm(vector<int>&nums,vector<vector<int>>&ans,int index){
    if(index==nums.size()){
        ans.push_back({nums});
        return;
    }
    for(int i=index;i<nums.size();i++){
        swap(nums[index],nums[i]);
        getperm(nums,ans,index+1);
        swap(nums[index],nums[i]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        getperm(nums,ans,0);
        return ans;
    }
};
