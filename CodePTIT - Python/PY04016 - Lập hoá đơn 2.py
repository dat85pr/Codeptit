from collections import namedtuple
from math import *
from datetime import datetime
class Hotel:
    def __init__(self, id, name, room, start, end, price):
        self.id = id
        self.name = name
        self.room = room
        self.start = start
        self.end = end
        self.price = price

    def gettime(self):
        st = datetime.strptime(self.start, '%d/%m/%Y')
        end = datetime.strptime(self.end, '%d/%m/%Y')
        return (end - st).days + 1

    def getprice(self):
        number = self.room // 100
        fee = 0
        x = self.gettime()
        if number == 1:
            fee = 25 * x
        elif number == 2:
            fee = 34 * x
        elif number == 3:
            fee = 50 * x
        else:
            fee = 80 * x
        return fee + self.price

    def __str__(self):
        return f'{self.id} {self.name} {self.room} {self.gettime()} {self.getprice()}'
list = []
for i in range(int(input())):
    id = f'KH{(i + 1):02d}'
    name = input()
    room = int(input())
    start = input().strip()
    end = input().strip()
    price = int(input())
    list.append(Hotel(id, name, room, start, end, price))
list.sort(key = lambda x: -x.getprice())
for x in list:
    print(x)
