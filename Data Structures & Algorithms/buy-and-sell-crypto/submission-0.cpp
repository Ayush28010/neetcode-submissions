class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP =0;
        for( int i =0 ; i< prices.size(); i ++){
            for ( int j = i+1 ; j< prices.size(); j++){
                if (maxP < prices[j]-prices[i]){
                    maxP=  max(maxP,prices[j]-prices[i]);
                }
            }
        }
        return maxP;

    }
};
