import sys
def main():
    nbLibre = int(input())
    lastTitle = 'A'
    for i in range(nbLibre):
        titre = input()
        if titre > lastTitle:
            lastTitle = titre
            print(titre)
main()