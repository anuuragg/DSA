
from collections import defaultdict

class Solution:
    def maximumSubarraySum(self, nums: list[int], k: int) -> int:
        res, curr_sum, l = 0, 0, 0
        count = defaultdict(int)

        for r in range(len(nums)):
            curr_sum += nums[r]
            count[nums[r]] += 1

            if r - l + 1 > k:
                count[nums[l]] -= 1
                if count[nums[l]] == 0:
                    count.pop(nums[l])
                curr_sum -= nums[l]
                l += 1

            if len(count) == k and r - l + 1 == k:
                res = max(res, curr_sum)

        return res
