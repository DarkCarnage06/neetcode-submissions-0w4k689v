class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>st;
        for(int i=0;i<nums.size();i++){
            st.push_back({nums[i],i});
        }
        sort(st.begin(),st.end());
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            int sum=st[left].first+st[right].first;
            if(sum==target){
                return {st[left].second,st[right].second};
            }else if(sum<target){
                left++;
            }else{
                right--;
            }
        }
    }
};
