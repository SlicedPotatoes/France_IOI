#Passe 12/20 car probleme de rapidité / mémoire utilisé
import sys
def main():
    nbInscrit, nbPresent = map(int, sys.stdin.readline().split())
    elevePresent = set()
    minEleve = 1
    for _ in range(nbPresent):
        id = int(sys.stdin.readline())
        elevePresent.add(id)
        while minEleve in elevePresent:
            elevePresent.remove(minEleve)
            minEleve += 1
            if minEleve == nbInscrit+1:
                minEleve = -1
        sys.stdout.write(str(minEleve) + "\n")
main()