class Solution {
public:
    int findMax(vector<int>&piles){
        int ans=INT_MAX;
        int n=piles.size();
        for(int i=0;i<n;i++){
            ans=max(ans,piles[i]);
        }
        return ans;
    }
    int totalhours(vector<int>&piles,int h){

        int totalh=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            totalh+=ceil((double)piles[i]/(double)h);
        }
        return totalh;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;int high=findMax(piles);
        while(low<=high){
            int mid=low+(high-low)/2;
            int totalh=totalhours(piles,mid);
            if(h>=totalh){
                high=mid-1;
            
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};
