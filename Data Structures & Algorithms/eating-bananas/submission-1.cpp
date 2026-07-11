class Solution {
   public:
    int timeTaken(vector<int> nums, int mid) {
        int totalHours = 0;
        for (int i = 0; i < nums.size(); i++) {
            totalHours += ceil((double)nums[i] / mid);
        }
        return totalHours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int len = piles.size();
        int low = 1;
        auto maxEle = max_element(piles.begin(), piles.end());
        int high = *maxEle;
        int ans=INT_MAX;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int time=timeTaken(piles,mid);
            if(time<=h){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};
