from math import *
for t in range(int(input())):
    n = input()
    tong = 0
    tich = 0
    for i in range(len(n)):
        m = ord(n[i]) - ord('0')
        if i % 2 != 0:
            tong += m
        else:
            if tich == 0:
                tich = m
            elif m != 0:
                tich *= m
    print(tich, tong)