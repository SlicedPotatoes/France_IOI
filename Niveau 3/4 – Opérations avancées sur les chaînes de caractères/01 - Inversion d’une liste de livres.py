import sys
def main():
    nbLibre = int(input())
    livres = []
    for i in range(nbLibre):
        livres.append(input())
    livres.reverse()
    for l in livres:
        print(l)
main()