from math import *
hauteur = int(input())
largeur = int(input())
for i in range(hauteur):
    for j in range(largeur):
        if (i + j) % 2 == 0:
            print("O", end="")
        else:
            print("X", end="")
    print()