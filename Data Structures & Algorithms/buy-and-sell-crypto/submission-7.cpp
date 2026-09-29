class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int BestBuy=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]>BestBuy){
                maxprofit=max(maxprofit,prices[i]-BestBuy);
            }
            BestBuy=min(BestBuy,prices[i]);
        }
        return maxprofit;
    }
};
