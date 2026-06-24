class Solution {
public:
    int binsearch(int start,int end,vector<int>& nums,int target){
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }else if(target>nums[mid]){
                return binsearch(mid+1,end,nums,target);
            }else{
                return binsearch(start,mid-1,nums,target);
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        return binsearch(0,nums.size()-1,nums,target);

    }
};