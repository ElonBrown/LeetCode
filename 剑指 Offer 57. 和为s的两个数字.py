# 双指针

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        l, r = 0, len(nums)-1
        while l < r:
            if nums[l]+nums[r] == target:
                return [nums[l], nums[r]]
            elif nums[l]+nums[r] < target:
                l += 1
            else:
                r -= 1
        return [-1, -1]
