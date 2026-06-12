class Solution {
public:
int binsearch(vector<int>& nums, int target,int start,int end) {
        if(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]<target){
                return binsearch(nums,target,mid+1,end);
            }else{
                return binsearch(nums,target,start,mid-1);
            }
        }return -1;
        
    }
    int search(vector<int>& nums, int target) {
       return binsearch(nums,target,0,nums.size()-1);
        
    }
};