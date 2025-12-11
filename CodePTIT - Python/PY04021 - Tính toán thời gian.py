
from math import *
from datetime import datetime

class Game:
    def __init__(self, id, name, start, end):
        self.id = id
        self.name = name
        self.start = start
        self.end = end
    def calc(self):
        hst, mst = map(int, self.start.split(':'))
        hen, men = map(int, self.end.split(':'))
        start_minutes = hst * 60 + mst
        end_minutes = hen * 60 + men
        total_minutes = end_minutes - start_minutes
        hours = total_minutes // 60
        minutes = total_minutes % 60
        return f'{hours} gio {minutes} phut'
    def sx(self):
        st = datetime.strptime(self.start, '%H:%M')
        en = datetime.strptime(self.end, '%H:%M')
        return (en -st).seconds
    def __str__(self):
        return f'{self.id} {self.name} {self.calc()}'
list = []
for _ in range(int(input())):
    id = input()
    name = input().strip()
    start = input()
    end = input()
    list.append(Game(id, name, start, end))
list.sort(key = lambda x: -x.sx())
for x in list:
    print(x)

