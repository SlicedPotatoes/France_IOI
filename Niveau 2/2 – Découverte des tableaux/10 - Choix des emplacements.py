nbEmplacements = int(input())
marchants = [0] * nbEmplacements
for i in range(nbEmplacements):
    marchants[int(input())] = i
for m in marchants:
    print(m)