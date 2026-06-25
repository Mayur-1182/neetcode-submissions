class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0;
        int len=prices.size();
        int right=1;
        int maxProfit=0;
        int temp=0;
       while(right<len){
        if(prices[left]<prices[right]){
            temp=prices[right]-prices[left];
            maxProfit=max(maxProfit,temp);
        }else{
            left=right;
     
        }
            right++;
       }
       return maxProfit;
    }
};
