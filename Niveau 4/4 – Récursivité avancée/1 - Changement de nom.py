def backtrack(lettres, size, curr):
   if (len(curr) == size):
      print(curr)
      return
   
   for c in lettres:
      curr += c
      backtrack(lettres, size, curr)
      curr = curr[:-1]
      
def main():
   nbLettre = int(input())
   lettres = input()
   size = int(input())
   
   print(nbLettre ** size)
   
   curr = ""
   backtrack(lettres, size, curr)
   
main()