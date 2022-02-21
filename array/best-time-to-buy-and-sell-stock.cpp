class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit=0;
        int prevMin=prices[0];
        
        // to get maxProfit we have to find minimum upto the number we have traversed
        for(auto &price:prices){
            if(prevMin>price)prevMin=price;
            else if(profit<(price-prevMin)) profit=price-prevMin;
            //need not to check when the prevMin is being updated 
            //because that time it will be zero anyway
        }
        return profit;
    }
};
