class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;

        int low = 0, right = nums.size() - 1;

        while (low <= right) {
            int mid = low + (right - low) / 2;

            if (nums[mid] == target) {
                first = mid;
                right = mid - 1;
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }


        low = 0;
        right = nums.size() - 1;


        while (low <= right) {
            int mid = low + (right - low) / 2;

            if (nums[mid] == target) {
                last = mid;
                low = mid + 1;
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return {first, last};
    }
};