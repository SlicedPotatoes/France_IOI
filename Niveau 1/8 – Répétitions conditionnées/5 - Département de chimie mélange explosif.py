nbMesureEnvisage = int(input())
minTemp = int(input())
maxTemp = int(input())

for i in range(nbMesureEnvisage):
    if minTemp <= int(input()) <= maxTemp:
        print("Rien à signaler")
    else:
        print("Alerte !!")
        break
