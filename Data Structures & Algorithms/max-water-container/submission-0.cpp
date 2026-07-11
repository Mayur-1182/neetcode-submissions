class Solution {
public:
    int maxArea(vector<int>& heights) {
        long maxWater=0;
        int left=0;
        int len=heights.size();
        int right=len-1;
        while(left<right){
            int width=right-left;
            int height=min(heights[left],heights[right]);
            if(maxWater<width*height){
                maxWater=width*height;
            }
            if(heights[left]<=heights[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxWater;
        
    }
};
