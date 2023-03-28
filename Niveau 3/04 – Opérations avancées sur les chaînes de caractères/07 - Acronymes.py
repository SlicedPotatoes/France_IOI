import sys
def main():
    acronyme = input()
    nbLivres = int(input())
    for i in range(nbLivres):
        titre = [el.capitalize() for el in input().split(' ')]
        b = True
        if len(titre) == len(acronyme):
            for i in range(len(titre)):
                if titre[i][0].upper() != acronyme[i].upper():
                    b = False
        else:
           b = False
        if b:
            print(" ".join(titre))
main()