from math import *
class Student:
    def __init__(self, name, ns, m1, m2, m3):
        self.name = name
        self.ns = ns
        self.m1 = m1
        self.m2 = m2
        self.m3 = m3
    def tol(self):
        return self.m1 + self.m2 + self.m3
    def __str__(self):
        return f'{self.name} {self.ns} {self.tol()}'

ts = Student(input(), input(), float(input()), float(input()), float(input()))
print(ts)
