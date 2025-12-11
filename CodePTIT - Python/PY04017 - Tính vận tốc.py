from math import *
from datetime import datetime
class Race:
    def __init__(self, name, tinh, time):
        self.name = name
        self.tinh = tinh
        self.time = time
        self.speed = 120 / self.time
    def getid(self):
        res = ''
        for x in self.tinh.split():
            res += x[0]
        for x in self.name.split():
            res += x[0]
        return res.upper()

    def __str__(self):
        return f'{self.getid()} {self.name} {self.tinh} {round(self.speed)} Km/h'
list = []
for _ in range(int(input())):
    name = input()
    tinh = input()
    time = input()
    h, m = map(int, time.split(':'))
    cnt = (h - 6) + m / 60
    list.append(Race(name, tinh, cnt))
list.sort(key = lambda x : -x.speed)
for x in list:
    print(x)
