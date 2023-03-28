from math import *
n = int(input())
S = 0
for k in range(1, n+1):
    S += 1 / k
print(S - log(n))