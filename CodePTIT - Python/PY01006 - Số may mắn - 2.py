def kt(a):
    for i in range(0, len(a)):
        if a[i] != '4' and a[i] != '7':
            return False
    return True
t = int(input())
for i in range(t):
    n = input()
    if kt(n):
        print('YES')
    else:
        print('NO')