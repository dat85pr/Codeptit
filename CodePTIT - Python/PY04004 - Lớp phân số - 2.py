from math import *
class Phanso:
    def __init__(self, tu = None, mau = None):
        self.tu = tu
        self.mau = mau
    def __add__(self, other):
        c = Phanso()
        c.mau = self.mau * other.mau
        c.tu = self.tu * other.mau + other.tu * self.mau
        c.Rg()
        return c
    def __str__(self):
        return f'{self.tu}/{self.mau}'
    def Rg(self):
        x = gcd(self.tu, self.mau)
        self.tu //= x
        self.mau //= x
arr = [int(i) for i in input().split()]
a = Phanso(arr[0], arr[1])
b = Phanso(arr[2], arr[3])
c = a + b
print(c)


