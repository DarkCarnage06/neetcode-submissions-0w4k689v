class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int longest=1;
        int count=1;
        int smaller=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==smaller+1){
                count++;
                smaller=nums[i];
            }else if(nums[i]==smaller){
                continue;
            }else{
                count=1;
                smaller=nums[i];
            }
            longest=max(longest,count);
        }
        return longest;
    }
};
