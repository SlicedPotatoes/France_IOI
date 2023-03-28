nbLivres = int(input())
longeur = 0
for i in range(nbLivres):
    titre = input()
    if len(titre) > longeur:
        print(titre)
        longeur = len(titre)