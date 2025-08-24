from math import *
def ln(p, q, x1, x2):
    k = int(x1.replace(p, q))
    h = int(x2.replace(p, q))
    return h + k
def nn(p, q, x1, x2):
    k = int(x1.replace(q, p))
    h = int(x2.replace(q, p))
    return h + k
for t in range(int(input())):
    p, q = map(str, input().split())
    if int(p) > int(q):
        p, q = q, p
    ip = input().split()
    if len(ip) == 1:
        x1 = ip[0]
        x2 = input()
    else:
        x1, x2 = ip
    print(nn(p, q, x1, x2), ln(p, q, x1, x2))
