class Solution {
public:

    int longestConsecutive(vector<int>& nums) {
     int longest =0;
     for(int i=0;i<nums.size();i++){
        int currentnum=nums[i];
        int count=1;
        while(true){
            bool found=false;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==currentnum+1){
                    currentnum++;
                    count++;
                    found=true;
                    break;
                }
                
            }if(!found) break;
        }if(count>longest)longest=count;
     }return longest;
}
};
