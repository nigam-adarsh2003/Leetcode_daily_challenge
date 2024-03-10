class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        ans=[]
        a=set(nums1)
        b=set(nums2)
        for num in b:
            if num in a:
                ans.append(num)
        return ans
                
        