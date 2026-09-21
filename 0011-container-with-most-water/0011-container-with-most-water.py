class Solution:
    def maxArea(self, height: list[int]) -> int:
        
        l = 0
        r = len(height) - 1
        mw = 0

        while(l < r):
            w = r - l
            h = min(height[r], height[l])
            area = w*h
            mw = max(mw, area)

            if height[l] <= height[r]:
                l += 1
            else:
                r -= 1

        return mw
