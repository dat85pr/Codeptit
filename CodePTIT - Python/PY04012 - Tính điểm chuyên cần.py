
from math import *
from datetime import datetime

class Sinhvien:
    def __init__(self, id, name, lop, cc):
        self.id = id
        self.name = name
        self.lop = lop
        self.cc = cc
    def getcc(self):
        cnt = 10
        for x in range(len(self.cc)):
            if self.cc[x] == 'v':
                cnt -= 2
            elif self.cc[x] == 'm':
                cnt -= 1
        if cnt < 0:
            return 0
        return cnt
    def getgc(self):
        if self.getcc() == 0:
            return 'KDDK'
        return ''
    def __str__(self):
        return f'{self.id} {self.name} {self.lop} {self.getcc()} {self.getgc()}'
list = []
n = int(input())
for _ in range(n):
    id = input()
    name = input()
    lop = input()
    list.append(Sinhvien(id, name, lop, ''))
for _ in range(n):
    id, a = input().split(' ')
    for x in list:
        if id == x.id:
            x.cc = a
for x in list:
    print(x)