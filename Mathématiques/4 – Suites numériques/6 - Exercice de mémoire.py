nbEleve = int(input())
avant = [0, 0]
for i in range(nbEleve):
    if avant[0] == 0:
        avant[0] = 1
        print(1)
    elif avant[1] == 0:
        avant[1] = 1
        print(1)
    else:
        nbMot = avant[0] + avant[1]
        avant[0] = avant[1]
        avant[1] = nbMot
        print(nbMot)