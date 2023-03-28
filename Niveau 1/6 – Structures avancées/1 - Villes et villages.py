nbLieu = int(input())
nbVille = 0
for i in range(nbLieu):
   if int(input()) > 10000:
      nbVille += 1
print(nbVille)