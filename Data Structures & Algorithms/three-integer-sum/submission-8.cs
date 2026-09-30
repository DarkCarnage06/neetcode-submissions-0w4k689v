public class Solution {
    public List<List<int>> ThreeSum(int[] nums) {
        List<List<int>>ans=new List<List<int>>();
        Array.Sort(nums);
        for(int i=0;i<nums.Length;i++){
            if(i>0&&nums[i]==nums[i-1])continue;
            int j=i+1;
            int k=nums.Length-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;
                    
                }else if(sum<0){
                    j++;
                
                }else{
                    ans.Add(new List<int>{nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    
                    while(j<k&&nums[j]==nums[j-1]){
                        j++;
                    }
                }
            }
        }return ans;
    }
}
