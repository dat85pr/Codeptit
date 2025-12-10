from math import *
for _ in range(int(input())):
    n = int(input())
    st = []
    res = [0] * n
    arr = [int(i) for i in input().split()]
    for i in range(n):
        cnt = 1
        while st and st[-1][0] <= arr[i]:
            cnt += st[-1][1]
            st.pop()
        res[i] = cnt
        st.append((arr[i], cnt))
    print(*res)
    print()
