Time Compplexity : O(n*k)
Space Complexity : O(n)

class Solution:
    def resultsArray(self, nums: List[int], k: int) -> List[int]:
        ans=[]
        for i in range(len(nums)-k+1):
            flag=True
            a=nums[i:i+k]
            for j in range(len(a)-1):
                if(a[j+1]-a[j]!=1):
                    flag=False
                    break
            if flag:
                ans.append(a[-1])
            else:
                ans.append(-1)
        return ans
