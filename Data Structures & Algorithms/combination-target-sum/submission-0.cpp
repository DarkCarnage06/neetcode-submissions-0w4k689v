class Solution {
public:
set<vector<int>>s;
    void combinationSum(vector<int>& nums,vector<int>& combination,vector<vector<int>>& ans,int i, int target){
        if(i==nums.size()||target<0){
            return;
        }
        if(target==0){
            if(s.find(combination)==s.end()){
            ans.push_back({combination});
            s.insert(combination);
            }
            return;
        }
        combination.push_back(nums[i]);
        combinationSum(nums,combination,ans,i+1,target-nums[i]);
         combinationSum(nums,combination,ans,i,target-nums[i]);
         combination.pop_back();
         combinationSum(nums,combination,ans,i+1,target);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int> combination;
        combinationSum(nums,combination,ans,0,target);
        return ans;
    }
};
