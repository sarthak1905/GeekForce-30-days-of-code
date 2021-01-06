// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// 5 Jan 2021

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int profit=0;
        int ans=0;
        int cur_min=INT_MAX;

        for(int i=0;i<prices.size();i++){

                if(prices[i]<cur_min){
                    cur_min = prices[i];
                }
                ans = prices[i]-cur_min;
                profit = max(profit,ans);
        }
        return profit;
    }
};
