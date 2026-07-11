class Solution {
public:
    int trap(vector<int>& nums) {
        int len=nums.size();
        int left=0;
        int right=len-1;
        int leftMax=nums[left];
        int rightMax=nums[right];

        int water=0;
        while(left<right){
            if(leftMax<rightMax){
                left++;
                leftMax=max(leftMax,nums[left]);
                water=water+leftMax-nums[left];
            }else{
                right--;
                rightMax=max(rightMax,nums[right]);
                water=water+rightMax-nums[right];
            }
        }
        return water;
        
    }
};
