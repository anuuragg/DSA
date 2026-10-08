class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        int low = 0;
        int high = k - 1;

        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        int res = sum;

        while (high < nums.size() - 1) {
            sum -= nums[low];
            low++;

            high++;
            sum += nums[high];

            res = max(sum, res);
        }

        return (double)res / k;
    }
};