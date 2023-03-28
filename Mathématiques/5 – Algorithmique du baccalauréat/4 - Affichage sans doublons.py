from math import *
A = int(input())
N = 1
arr = []
while N <= sqrt(A):
    if A % N == 0:
        if N not in arr:
            arr.append(N)
            print(N)
        if A//N not in arr:
            arr.append(A//N)
            print(A//N)
    N += 1