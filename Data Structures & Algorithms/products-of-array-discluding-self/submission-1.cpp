class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len=nums.size();
        vector<int>result;
        int temp=1;
        int zeroCnt=0;
        for(int i=0;i<len;i++){
            if(nums[i]!=0){
                temp*=nums[i];
            }
            if(nums[i]==0){
                zeroCnt++;
            }
        }
        for(int i=0;i<len;i++){
           if(nums[i]!=0&&zeroCnt>0||nums[i]==0&&zeroCnt>1){
            result.push_back(0);
           }
           else if(nums[i]!=0&&zeroCnt==0){
            result.push_back(temp/nums[i]);
           }else if(nums[i]==0&&zeroCnt==1){
            result.push_back(temp);
           }
        }
        return result;
    }
};
