nbLivres = int(input())
lenMin = int(input())
for i in range(nbLivres):
   titre = input()
   r = input()
   if len(r) < lenMin:
      print(titre)