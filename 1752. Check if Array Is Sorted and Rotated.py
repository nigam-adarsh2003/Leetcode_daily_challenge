Time Complexity - O(n^2)
Space Complexity - O(n)

class Solution:
    def check(self, nums: List[int]) -> bool:
        sorted_arr=sorted(nums)
        for r in range(len(nums)):
            flag=True
            for i in range(len(nums)):
                if(sorted_arr[i]!=nums[(i+r)%len(nums)]): 
                    flag=False
                    break
            if(flag==True):
                return True
        return False
