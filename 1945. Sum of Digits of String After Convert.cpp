// Time Complexity : O(k*n)
// Space Complexity : O(n)

class Solution:
    def getLucky(self, s: str, k: int) -> int:
        n=""
        for i in s:
            n+=str(ord(i) - ord('a') + 1)
        while(k!=0):
            c=0
            for i in n:
                c+=int(i)
            k-=1
            n=str(c)
        return int(n)
