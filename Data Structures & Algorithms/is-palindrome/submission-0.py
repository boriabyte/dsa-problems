class Solution:
    def isPalindrome(self, s: str) -> bool:
        l = 0
        r = len(s) - 1

        while(l < r):
            while(l < r and not self.alphaNum(s[l])):
                l+=1
            while (r > l and not self.alphaNum(s[r])):
                r-=1
            if(s[l].lower() != s[r].lower()):
                return False
            
            l+=1
            r-=1
            
        return True

    def alphaNum(self, s: str) -> bool:
        return (s >= 'A' and s <= 'Z' or s >= 'a' and s <= 'z' or s >= '0' and s<='9')
        