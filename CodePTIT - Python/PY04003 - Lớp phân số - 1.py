from math import *
class Phanso:
    def __init__(self, tu, mau):
        self.tu = tu
        self.mau = mau
    def Rg(self, tu, mau):
        x = int(gcd(self.tu, self.mau))
        self.tu = int(tu / x)
        self.mau = int(mau / x)
        z = str(self.tu) + '/' + str(self.mau)
        return z
arr = input().split()
r = Phanso(int(arr[0]), int(arr[1]))
print(r.Rg(r.tu, r.mau))


