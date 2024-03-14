class Solution:
    def maxArea(self, height: List[int]) -> int:
        # BRUTE FORCE (TLE)
        # res = 0

        # for l in range(len(height)):
        #     for r in range(l+1, len(height)):
        #         area = (r-l) * min(height[l], height[r])
        #         res = max(res, area)

        # return res

        # O(1)

        l = 0
        res = 0
        r = len(height) - 1

        while l < r:
            area = (r-l) * min(height[l], height[r])
            res = max(res, area)
            if height[l] > height[r]:
                r -= 1
            elif height[l] < height[r]:
                l += 1
            else:
                if (height[l+1]) > (height[r-1]):
                    l += 1
                else:
                    r -= 1
