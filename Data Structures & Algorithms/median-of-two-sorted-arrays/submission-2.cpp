class Solution {
   public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> nums;
        int total = n1 + n2;
        int i = 0;
        int j = 0;
        double sum=0;
        while (i < n1 && j < n2) {
            if (nums1[i] <= nums2[j]) {
                nums.push_back(nums1[i]);
                i++;
            } else if (nums1[i] > nums2[j]) {
                nums.push_back(nums2[j]);
                j++;
            }
        }
        while (i < n1) {
            nums.push_back(nums1[i]);
            i++;
        }
        while (j < n2) {
            nums.push_back(nums2[j]);
            j++;
        }
        if(total%2==0){
            int k=total/2;
            sum=nums[k-1]+nums[k];
            return sum/2;
        }else{
            int k=(total+1)/2;
            return static_cast<double>(nums[k-1]);
        }
    }
};
