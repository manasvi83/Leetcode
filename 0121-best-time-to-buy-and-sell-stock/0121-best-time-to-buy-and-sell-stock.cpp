class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=0;
        int max_profit=0;
        mn=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>mn) 
            {
               max_profit=max(max_profit,prices[i]-mn); 
            }
            else if (prices[i]<mn)
            {
                mn=prices[i];
            }            
        }
        return max_profit;
    }
};