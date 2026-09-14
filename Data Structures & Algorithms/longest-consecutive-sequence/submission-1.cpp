class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        int longest=1;
        int count=0;
        int smaller=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1==smaller){
                count+=1;
                smaller=nums[i];
            }else if(smaller!=nums[i]){{
                count=1;
                smaller=nums[i];
            }
            longest=max(longest,count);
            }
        }
        return longest;
    }
};
