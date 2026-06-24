class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int len=nums.size();
        if(len<=1) return len;
        sort(nums.begin(),nums.end());
        int cnt=1;
        int maxCnt=1;
        for(int i=1;i<len;i++){
            if(nums[i-1]+1==nums[i]){
                cnt++;
                maxCnt=max(maxCnt,cnt);
            } else if(nums[i]==nums[i-1]){
                continue;
            }
            else{
                cnt=0;
            }
        }
        return maxCnt;
    }
};
