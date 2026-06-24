class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int len=heights.size();
        int maxArea=0;
        for(int i=0;i<len;i++){
            for(int j=i;j<len;j++){
                auto min=min_element(heights.begin()+i,heights.begin()+j+1);
                int minValue=*min;
                int distance=j-i+1;
                maxArea=max(maxArea,minValue*distance);
            }
        }
    
        return maxArea;
    }
};
