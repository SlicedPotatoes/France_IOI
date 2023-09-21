#Passe 12/20 car probleme de rapidité / mémoire utilisé
import sys
def main():
    MAX_ELEVE = 5 + 1
    nbInscrit, nbPresent = map(int, sys.stdin.readline().split())
    elevePresent = [False] * MAX_ELEVE
    minEleve = 1
    for _ in range(nbPresent):
        id = int(sys.stdin.readline())
        if(id < MAX_ELEVE):
          elevePresent[id] = True 
          while minEleve != -1 and minEleve < MAX_ELEVE and elevePresent[minEleve]:
            minEleve += 1
            if(minEleve == nbInscrit+1):
               minEleve = -1        
        sys.stdout.write(str(minEleve) + "\n")
main()