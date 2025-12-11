from math import *
class Sinhvien:
    def __init__(self, id, name, total):
        self.id = id
        self.name = name
        self.avg = round(total / 2 + 0.001, 2)
    def getRank(self):
        if self.avg >= 9.5:
            return 'XUAT SAC'
        elif self.avg >= 8:
            return 'DAT'
        elif self.avg >= 5:
            return 'CAN NHAC'
        else: return 'TRUOT'
    def __str__(self):
        return f'{self.id} {self.name} {self.avg:.2f} {self.getRank()}'
n = int(input())
list = []
for i in range(n):
    id = "TS0" + str(i + 1)
    name = input()
    diem1, diem2 = float(input()), float(input())
    if diem1 > 10: diem1 /= 10
    if diem2 > 10: diem2 /= 10
    total = diem1 + diem2
    list.append(Sinhvien(id, name, total))
list.sort(key = lambda x: (-x.avg))
for x in list:
    print(x)
