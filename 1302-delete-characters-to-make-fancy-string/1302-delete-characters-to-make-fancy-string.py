class Solution:
    def makeFancyString(self, s: str) -> str:
        S=""
        n=len(s)
        if(n<3):
            return s
        for i in range(n-2):
            if(s[i]==s[i+1]==s[i+2]):
                continue
            else:
                S+=s[i]
        S+=s[-2]+s[-1]
        return S