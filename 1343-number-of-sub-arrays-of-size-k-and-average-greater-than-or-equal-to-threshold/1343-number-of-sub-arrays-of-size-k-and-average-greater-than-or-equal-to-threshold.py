class Solution:
    def numOfSubarrays(self, arr: list[int], k: int, threshold: int) -> int:
        left, right = 0, k-1
        avg, res, sum = 0, 0, 0

        for i in range(k):
            sum += arr[i]

        avg = sum / k

        while right < len(arr):

            if avg >= threshold:
                res += 1

            if right+1 >= len(arr):
                break
            
            sum -= arr[left]
            left += 1
            right += 1
            sum += arr[right]

            avg = sum / k

        return res

