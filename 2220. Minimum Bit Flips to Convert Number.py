class Solution:
    def minBitFlips(self, start: int, goal: int) -> int:
        ans=""
        while(start!=0):
            a=start%2
            ans+=str(a)
            start=start//2
        ans=ans[::-1]
        res=""
        while(goal!=0):
            b=goal%2
            res+=str(b)
            goal=goal//2
        res=res[::-1]
        if(len(ans)!=len(res)):
            res=res.zfill(len(ans))
            ans=ans.zfill(len(res))
        c=0
        for i in range(len(ans)):
            if(ans[i]!=res[i]):
                c+=1
        return c


