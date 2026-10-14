class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int longest=0;
        int count=1;
        int smaller=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]==smaller+1){
                count++;
                smaller=nums[i];
            }else if(smaller==nums[i]){
                continue;
            }else{
                count=1;
                nums[i]=smaller;
            }
            longest=max(longest,count);
        }
        return longest;
    }
};
