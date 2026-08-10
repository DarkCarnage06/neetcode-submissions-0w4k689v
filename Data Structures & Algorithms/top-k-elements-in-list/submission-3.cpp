class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                while(k--){
                if(nums[i]==nums[j]){
                    return {i,j};
                }else{
                    return {};
                }
                }
            }
        }return {};
    }
};
