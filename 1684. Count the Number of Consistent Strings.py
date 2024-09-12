// Time complexity - O(n*m)
// Space complexity - O(n*m)

class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        count=0
        for i in words:
            a=set(i)
            for j in a:
                if j not in allowed:
                    count+=1
                    break
        return len(words)-count
