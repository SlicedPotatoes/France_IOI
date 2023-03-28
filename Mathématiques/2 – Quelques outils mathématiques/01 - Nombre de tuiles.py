from math import *

def hypotenuse(h, H, f):
    AB = F/2
    BC = H - h
    return sqrt((AB ** 2) + (BC ** 2))

F = float(input())
L = float(input())
H = float(input())
h = float(input())

print((hypotenuse(h, H, F) * L) * 2)