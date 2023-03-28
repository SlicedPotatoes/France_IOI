j1 = input()
j2 = input()
minlen = len(j1)
nbEgalite = 0
if len(j2) < minlen:
    minlen = len(j2)
for i in range(minlen):
    if j1[i] == j2[i]:
        nbEgalite += 1
    elif j1[i] < j2[i]:
        print(1)
        break
    else:
        print(2)
        break
if nbEgalite == minlen:
    if len(j1) > len(j2):
        print(1)
    elif len(j1) < len(j2):
        print(2)
    else:
        print("=")
print(nbEgalite)