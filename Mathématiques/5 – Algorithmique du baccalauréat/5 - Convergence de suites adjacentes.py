from math import *
a = float(input())
b = float(input())

while round(a, 5) != round(b, 5):
    _a = (a+b)/2
    b = sqrt((a ** 2 + b ** 2)/2)
    a = _a

print(round(a, 5))
print(round(b, 5))
