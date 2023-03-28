import sys
def main():
    nbLibre = int(input())
    livres = []
    for i in range(nbLibre):
        livres.append(input())
    livres.sort()
    for l in livres:
        print(l)
main()