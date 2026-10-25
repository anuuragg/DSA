class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        int i = 0, j = 0;

        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] <= nums2[j]){
                merged.push_back(nums1[i]);
                i++;
            } else {
                merged.push_back(nums2[j]);
                j++;
            }
        }

        while(i < nums1.size()){
            merged.push_back(nums1[i]);
            i++;
        }

        while(j < nums2.size()){
            merged.push_back(nums2[j]);
            j++;
        }

        int arr_size = merged.size();
        double median;

        if(arr_size % 2 == 1){
            median = merged[arr_size / 2];
        } else {
            median = (merged[arr_size / 2-1] + merged[arr_size / 2]) / 2.0;
        }

        return median;

    }
};