from math import *
ques = {}
last = None
for _ in range(int(input())):
    ip = input()
    if ip == '':
        last = None
        continue
    if last is not None:
        ques[last] += 1
    else:
        ques[ip] = 0
        last = ip
for name, count in ques.items():
    print(f'{name}: {count}')