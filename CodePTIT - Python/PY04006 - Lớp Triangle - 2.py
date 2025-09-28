from math import *
import sys
class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    def distance(self, other):
        return sqrt(pow(self.x - other.x, 2) + pow(self.y - other.y, 2))
inputs = sys.stdin.read().split()
i = 1
for _ in range(int(inputs[0])):
    Ax, Ay, Bx, By, Cx, Cy = map(float, inputs[i:i + 6])
    i += 6
    a = Point(Ax, Ay)
    b = Point(Bx, By)
    c = Point(Cx, Cy)
    x = a.distance(b)
    y = a.distance(c)
    z = b.distance(c)
    if x + y > z and x + z > y and y + z > x:
        p = (x + y + z) / 2
        area = sqrt(p * (p - x) * (p - y) * (p - z))
        print("{:.2f}".format(area))
    else:
        print("INVALID")