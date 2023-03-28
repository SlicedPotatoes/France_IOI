from math import *
def distance(x1, x2, y1, y2):
   return round(sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)), 6)
x1 = float(input())
y1 = float(input())
x2 = float(input())
y2 = float(input())
print(distance(x1, x2, y1, y2))