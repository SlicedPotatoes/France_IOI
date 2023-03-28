from math import *
def distance(x1, y1, x2, y2):
    return sqrt(pow(x2 - x1, 2) + pow (y2 - y1, 2))
x = int(input())
y = int(input())
nbFleurs = int(input())
c = 0
for i in range(nbFleurs):
    _x = int(input())
    _y = int(input())
    if(distance(x, y, _x, _y) < 1000):
        c+=1
print(c)
