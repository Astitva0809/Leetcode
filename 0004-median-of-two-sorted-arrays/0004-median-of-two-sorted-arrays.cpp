class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       float median =0;
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        int n = nums1.size();
        if(n ==0)  return median;
        if(n == 1)  return nums1[0];
        sort(nums1.begin(),nums1.end());
        if( (n)%2 ==0 ){
            int mid1 = n/2;
            int mid2 = (n/2)-1;
           // cout<<mid1<<" "<<mid2;
            median = (float)(nums1[mid1] + nums1[mid2]) / 2 ;
        }
        else {
            int mid = n/2;
            median = nums1[mid];
        }
        return median;  
    }
};