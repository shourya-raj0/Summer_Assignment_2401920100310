class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit= 0;
        int minprice= prices[0];

        for(int i=1; i<prices.size();i++){
            minprice= min(prices[i],minprice);

            if(prices[i]>minprice){
                int diff= prices[i]-minprice;
                maxprofit= max(maxprofit,diff);
            }
        }
        return maxprofit;
    }
};
