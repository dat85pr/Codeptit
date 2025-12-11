from math import *
from datetime import datetime
class Rain:
    def __init__(self, id, name, time, rainfall):
        self.id = id
        self.name = name
        self.time = time
        self.rainfall = rainfall
    def calc(self):
        return round(self.rainfall * 60 / self.time, 2)
    def __str__(self):
        return f'{self.id} {self.name} {self.calc():.2f}'
i = 1
list = []
for _ in range(int(input())):
    id = f'T{i:02d}'
    name =  input().strip()
    start = datetime.strptime(input().strip(), '%H:%M')
    end = datetime.strptime(input().strip(), '%H:%M')
    rainfall = int(input())
    time = (end - start).seconds // 60
    found = None
    for x in list:
        if x.name == name:
            found = x
            break
    if found:
        found.time += time
        found.rainfall += rainfall
    else:
        list.append(Rain(id, name, time, rainfall))
        i += 1
for x in list:
    print(x)
