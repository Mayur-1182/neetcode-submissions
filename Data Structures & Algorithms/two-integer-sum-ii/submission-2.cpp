class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len=nums.size();
        int left=0;
        int right=len-1;
        sort(nums.begin(),nums.end());
        while(left<right){
            if(nums[left]+nums[right]==target){
                return {left+1,right+1};
            }
            else if(nums[left]+nums[right]<target){
                left++;
            }
            else if(nums[left]+nums[right]>target){
                right--;
            }
        }
        return {-1,-1};
    }
};
