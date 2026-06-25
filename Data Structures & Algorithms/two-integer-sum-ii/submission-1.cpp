class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int len=numbers.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<len;i++){
            mpp[numbers[i]]=i;
        }
        for(int i=0;i<len;i++){
            int more=target-numbers[i];
            if(mpp.find(more)!=mpp.end()){
                return {i+1,mpp[more]+1};
            }
        }
    }
};
