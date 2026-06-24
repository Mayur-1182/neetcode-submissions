class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int len=nums.size();
        int cnt=0;
        vector<int>result;
        unordered_map<int,int>mpp;
        for(int i=0;i<len;i++){
            mpp[nums[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto it:mpp){
            pq.push({it.second,it.first});
        }
        for(int i=0;i<k;i++){
            int top=pq.top().second;
            result.push_back(top);
            pq.pop();
        }
        return result;


    }
};