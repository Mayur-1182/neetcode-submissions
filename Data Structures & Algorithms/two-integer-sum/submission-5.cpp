class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     int len=nums.size();
     vector<pair<int,int>>temp;
     for(int i=0;i<len;i++){
        temp.push_back({nums[i],i});
     }
     sort(temp.begin(),temp.end());
    
     int left=0;
     int right=len-1;
     while(left<right){
        int sum=temp[left].first+temp[right].first;
        if(target<sum){
            right--;
        } else if(target>sum){
            left++;
        }else if(sum==target){
            int firstIdx = temp[left].second;
            int secondIdx = temp[right].second;
            return {min(firstIdx, secondIdx), max(firstIdx, secondIdx)};
        }
     }
     return {-1,-1};
    }
    
};
