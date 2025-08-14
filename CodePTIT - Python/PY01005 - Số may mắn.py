def kt(a):
    cnt = 0
    for i in range(0, len(a)):
        if a[i] == '4':
            cnt += 1
        if a[i] == '7':
            cnt += 1
    if cnt == 4 or cnt == 7:
        return True
    return False
n = input()
if kt(n):
    print('YES')
else:
    print('NO')