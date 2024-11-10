Time Complexity : O(nlogt)
Space Complexity : O(1)

class Solution:
    def smallestNumber(self, n: int, t: int) -> int:
        while True:
            num=n
            prod=1
            while(num!=0):
                prod*=(num%10)
                num=num//10
            if(prod%t==0):
                return n
            n+=1
