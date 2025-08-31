from math import *
s = input()
su = 0
for i in range(0,len(s)):
    su += (ord(s[i]) - ord('0'))*(2**(len(s)-i-1))
x = ""
while su > 0:
    m = su % 8
    x = str(m) + x
    su //= 8
print(x)
