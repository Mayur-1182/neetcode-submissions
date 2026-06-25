class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int len=numbers.size();
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                if(numbers[i]+numbers[j]==target){
                    return {i+1,j+1};
                }
            }
        }
        return {-1,-1};
        
    }
};
