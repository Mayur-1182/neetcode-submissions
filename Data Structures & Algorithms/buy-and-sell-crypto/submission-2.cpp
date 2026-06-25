class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len=prices.size();
        int maxProfit=0;
        int temp=0;
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                if(prices[i]<prices[j]){
                    temp=prices[j]-prices[i];
                    maxProfit=max(temp,maxProfit);
                }
            }
        }
        return maxProfit;
    }
};
