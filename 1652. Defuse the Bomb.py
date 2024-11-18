Time Complexity: O(n*|k|)
Space Complexity: O(n)

class Solution:
    def decrypt(self, code: List[int], k: int) -> List[int]:
        Code=code*2
        n=len(code)
        if(k==0):
            return [0]*n
        for i in range(n):
            if(k>0):
                code[i]=sum(Code[i+1:k+i+1])
            else:
                code[i]=sum(Code[i+n+k:i+n])
        return code
