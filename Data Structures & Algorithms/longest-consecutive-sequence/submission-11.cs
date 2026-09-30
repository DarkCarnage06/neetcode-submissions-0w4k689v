public class Solution {
    public int LongestConsecutive(int[] nums) {
       
        Array.Sort(nums);
        int longest=1;
        int count=1;
        int smaller=nums[0];
        for(int i=0;i<nums.Length;i++){
        if(nums[i]==smaller+1){
            count++;
            smaller=nums[i];
        }
        else if(nums[i]==smaller){
            continue;
        }else{
            count=1;
            smaller=nums[i];
        }
        longest=Math.Max(longest,count);
        }
        return longest;
    }

}
