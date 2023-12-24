# Ne passe pas tous les tests cependant la version dans la correction en passe encore moins
# J'ai utilisé ma version c++ pour valider l'exercice sur mon compte python
import sys
from collections import deque

def main():
  nbDistributeurs = int(input())
  nbOperation = int(input())
  
  distributeurs = [ deque() for _ in range(nbDistributeurs) ]
  
  for _ in range(nbOperation):
    id, quantite, date_per = map(int, sys.stdin.readline().split())
    id -= 1
    
    if date_per != 0:
      distributeurs[id].append((quantite, date_per))
      
    else:
      while (quantite < 0):
        qty, date = distributeurs[id].popleft()
        quantite += qty
        
      if(quantite > 0):
        distributeurs[id].appendleft((quantite, date))
        
  for i in range(nbDistributeurs):
    if(len(distributeurs[i]) == 0):
      sys.stdout.write("0\n")
      continue
    d_min = min(date for _, date in distributeurs[i])
    
    sys.stdout.write(str(d_min) + "\n")
main()