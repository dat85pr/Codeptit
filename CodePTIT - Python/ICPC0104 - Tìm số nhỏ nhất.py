from math import *

for t in range(int(input())):
    n = input()
    m = []
    s = ""
    for i in range(len(n)):
        if n[i].isdigit():
            s += n[i]
        elif s != "":
            x = int(s)
            m.append(x)
            s = ''
    print(min(m))