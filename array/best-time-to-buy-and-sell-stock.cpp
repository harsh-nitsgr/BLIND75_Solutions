class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int Max=0;
        int Min=0;
        int profit=0;
        
        for(int i=0;i<prices.size();i++){
            if(prices[i]>prices[Max])Max=i;
            if(prices[i]<prices[Min])Min=i;
            
            if(Min>Max)Max=i; 
            // if at any point index of min in greater than index of max so that max should be left
            profit=max(profit,prices[Max]-prices[Min]);
        }
        return profit;
    }
};
