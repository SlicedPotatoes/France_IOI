import sys
def main():
   nbJour, nbPeriode = map(int, sys.stdin.readline().split())
   periodes = [0]*(nbJour + 1)
   somme = 0
   for j, n in enumerate(sys.stdin.readline().split(), 1):
      somme += int(n)
      periodes[j] = somme
   
   for i in range(nbPeriode):
      start, end = map(int, sys.stdin.readline().split())
      sys.stdout.write(str(periodes[end] - periodes[start - 1]) + "\n")
main()