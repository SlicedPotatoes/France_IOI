from math import *
p = int(input())
n0 = 1
while (3 ** n0) + n0 - 1 < 10 ** p:
    n0 += 1
print(n0)