nbLivres, nbJours = map(int, input().split(' '))
livres = [0] * nbLivres
for i in range(nbJours):
    nbClients = int(input())
    for j in range(nbClients):
        iLivre, duree = map(int, input().split(' '))
        if livres[iLivre] == 0:
            livres[iLivre] = duree
            print(1)
        else:
            print(0)
    for j in range(nbLivres):
        if(livres[j] != 0):
            livres[j] -= 1