class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        int longest=1;
        int count=1;
        int smaller=nums[0];
        for(int i=0;i<nums.size();i++){
        if(nums[i]==smaller+1){
            count++;
            smaller=nums[i];
        }
        else if(nums[i]==smaller){
            continue;
        }
        else{
            count=1;
            smaller=nums[i];
        }
        longest=max(longest,count);

        }
        return longest;
    }
};
