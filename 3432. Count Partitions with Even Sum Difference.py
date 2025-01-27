Time Complexity: O(n)
Space Complexity: O(1)

class Solution:
    def countPartitions(self, nums: List[int]) -> int:
        count=0
        total=sum(nums)
        Prefix=0
        for i in range(len(nums)-1):
            Prefix+=nums[i]
            Sufix=total-Prefix
            if((Prefix-Sufix)%2==0):
                count+=1
        return count
