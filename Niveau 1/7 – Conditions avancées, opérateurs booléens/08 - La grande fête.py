dD = int(input())
dF = int(input())
nbSuspect = 0
nbPersonne = int(input())
for i in range(nbPersonne):
    dE = int(input())
    dS = int(input())
    if dS < dD or dF < dE:
        nbSuspect += 1
print(nbPersonne - nbSuspect)