from math import *
s = input()
s = s.lower()
n = len(s)
if s[n - 1] == 'y' and s[n - 2] == 'p' and s[n - 3] == '.':
    print('yes')
else:
    print('no')