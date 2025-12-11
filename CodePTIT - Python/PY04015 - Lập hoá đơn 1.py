from math import *
from datetime import datetime


class Invoice:
    def __init__(self, id, name, old, new):
        self.id = id
        self.name = name
        self.old = old
        self.new = new
    def getTol(self):
        sum = self.new - self.old
        res = 0
        fee = 0
        if sum > 100:
            res = 50 * 100 + 50 * 150 + (sum - 100) * 200
            fee = 1.05
        elif sum > 50:
            res = 50 * 100 + (sum - 50) * 150
            fee = 1.03
        else:
            res = 100 * sum
            fee = 1.02
        return int(res * fee + 0.5)
    def __str__(self):
        return f'{self.id} {self.name} {self.getTol()}'
list = []
i = 1
for _ in range(int(input())):
    id = f'KH{i:02d}'
    i += 1
    name = input()
    old = int(input())
    new = int(input())
    list.append(Invoice(id, name, old, new))
list.sort(key = lambda x :(-x.getTol()))
for x in list:
    print(x)    