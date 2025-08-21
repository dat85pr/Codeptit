from math import *
for t in range(int(input())):
    d, m = map(int, input().split())
    if m == 1:
        if d >= 1 and d <= 19:
            print('Ma Ket')
        elif d >= 20 and d <= 31:
            print('Bao Binh')
    elif m == 2:
        if d >= 1 and d <= 18:
            print('Bao Binh')
        elif d >= 19 and d <= 29:
            print('Song Ngu')
    elif m == 3:
        if d >= 1 and d <= 20:
            print('Song Ngu')
        elif d >= 21 and d <= 31:
            print('Bach Duong')
    elif m == 4:
        if d >= 1 and d <= 19:
            print('Bach Duong')
        elif d >= 20 and d <= 30:
            print('Kim Nguu')
    elif m == 5:
        if d >= 1 and d <= 20:
            print('Kim Nguu')
        elif d >= 21 and d <= 31:
            print('Song Tu')
    elif m == 6:
        if d >= 1 and d <= 20:
            print('Song Tu')
        elif d >= 21 and d <= 30:
            print('Cu Giai')
    elif m == 7:
        if d >= 1 and d <= 22:
            print('Cu Giai')
        elif d >= 23 and d <= 31:
            print('Su Tu')
    elif m == 8:
        if d >= 1 and d <= 22:
            print('Su Tu')
        elif d >= 23 and d <= 31:
            print('Xu Nu')
    elif m == 9:
        if d >= 1 and d <= 22:
            print('Xu Nu')
        elif d >= 23 and d <= 30:
            print('Thien Binh')
    elif m == 10:
        if d >= 1 and d <= 22:
            print('Thien Binh')
        elif d >= 23 and d <= 31:
            print('Thien Yet')
    elif m == 11:
        if d >= 1 and d <= 22:
            print('Thien Yet')
        elif d >= 23 and d <= 30:
            print('Nhan Ma')
    elif m == 12:
        if d >= 1 and d <= 21:
            print('Nhan Ma')
        elif d >= 22 and d <= 31:
            print('Ma Ket')