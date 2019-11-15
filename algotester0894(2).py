def longestPalindrome(s):
        temp = ""
        
        
n = input()
s = input()
temp = ""
for i in range(len(s)):
            for j in range(len(s)-1,i-1,-1):
                if s[i] == s[j]:
                    m = s[i:j+1]
                    if m == m[::-1]:
                        if len(temp) <= len(m):
                            temp = m
if(temp):
    print(len(temp))
else:
    print(1)
