def backtrack(lettres, size, curr, usedLetter):
   if (len(curr) == size):
      print(curr)
      return
   
   for i in range(len(lettres)):
      if(usedLetter[i]):
         continue
      curr += lettres[i]
      usedLetter[i] = True
      backtrack(lettres, size, curr, usedLetter)
      curr = curr[:-1]
      usedLetter[i] = False
      
def main():
   nbLettre = int(input())
   lettres = input()
   size = int(input())
   
   combinaison = 1
   for i in range(size):
      combinaison *= nbLettre - i
   
   print(combinaison)
   
   curr = ""
   usedLetter = [False] * nbLettre
   
   backtrack(lettres, size, curr, usedLetter)
   
main()