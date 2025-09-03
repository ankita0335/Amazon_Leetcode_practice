class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int i = 0 , j = 0;
        vector<int>ansvec;
        while(i< n  && j< m)
        {
            if(nums1[i]<nums2[j])
            {
                ansvec.push_back(nums1[i]);
                i++;
            }
            else{
                ansvec.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n){ 
            ansvec.push_back(nums1[i]);i++;
        }
        while(j<m){
            ansvec.push_back(nums2[j]);
            j++;
        }
        int sum = n+m;
        if(double(sum%2) != 0)  return (double)ansvec[sum/2];
        double median = ((double)ansvec[sum/2]+(double)ansvec[sum/2-1] )/2;
        return median ;
    }
};