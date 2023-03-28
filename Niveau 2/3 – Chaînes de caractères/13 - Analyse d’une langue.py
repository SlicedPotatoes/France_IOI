recherche = input()
nbLigne = int(input())
c = 0
for i in range(nbLigne):
    ligne = input()
    for char in ligne:
        if char == recherche:
            c += 1
print(c)