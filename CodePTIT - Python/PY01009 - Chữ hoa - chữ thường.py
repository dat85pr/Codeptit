from math import *
s = input()
lower = 0
for i in s:
    if i.islower():
        lower += 1
if lower >= len(s) - lower:
    print(s.lower())
else:
    print(s.upper())