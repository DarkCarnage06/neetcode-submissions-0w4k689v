class Solution {
public:
    int findMAX(vector<int>&piles){
        int ans=INT_MAX;
        int n=piles.size();
        for(int i=0;i<n;i++){
            ans=max(ans,piles[i]);
        }
        return ans;
    }
    int totalhours(vector<int>&piles,int h){
        int totalh=0;
        for(int i=0;i<piles.size();i++){
            totalh+=ceil((double)piles[i]/(double)h);
        }
        return totalh;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        int end=findMAX(piles);
        while(start<=end){
            int mid=start+(end-start)/2;
            int totalh=totalhours(piles,mid);
            if(h>=totalh){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return start;
    }
};
