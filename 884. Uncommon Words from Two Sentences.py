class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        a=s1.split(" ")
        b=s2.split(" ")
        c=a+b
        ans=[]
        d=Counter(c)
        for i,j in d.items():
            if j==1:
                ans.append(i)
        return ans
