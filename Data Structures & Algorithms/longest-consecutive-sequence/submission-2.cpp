class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int len=nums.size();
        if(len==1) return 1;

        sort(nums.begin(),nums.end());
        int cnt=1;
        int maxCnt=0;
        for(int i=0;i<len-1;i++){
            if(nums[i]+1==nums[i+1]){
                cnt++;
                maxCnt=max(maxCnt,cnt);
            } else if(nums[i]==nums[i+1]){
                continue;
            }
            else{
                cnt=0;
            }
        }
        return maxCnt;
    }
};
