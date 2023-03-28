from math import *

def hypothenus(AB, BC):
    return sqrt((AB ** 2) + (BC ** 2))
longMax = int(input())
for i in range(2, longMax, 1):
    for j in range(2, longMax, 1):
        hyp = hypothenus(i, j)
        if hyp == round(hyp) and i < j < hyp <= longMax:
            print(i, j, round(hyp), sep=" ")
