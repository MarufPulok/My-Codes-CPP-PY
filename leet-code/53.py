class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        maxSum = nums[0]
        currentSum = 0

        for n in nums:
            currentSum = max(currentSum, 0)
            currentSum += n
            maxSum = max(currentSum, maxSum)

        return maxSum
