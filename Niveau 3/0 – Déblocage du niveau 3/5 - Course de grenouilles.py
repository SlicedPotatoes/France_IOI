nbGrenouilles = int(input())
nbTours = int(input())
pos = [0] * nbGrenouilles
tete = [0] * nbGrenouilles

for i in range(nbTours):
   _p = max(pos)
   c = 0
   for j in range(nbGrenouilles):
      if pos[j] == _p: c+=1
   if c != 1:
      _p = 0
   if _p != 0: tete[pos.index(_p)] += 1

   idGrenouille, distance = map(int, input().split(" "))
   pos[idGrenouille - 1] += distance
   
maxTete = max(tete)
print(tete.index(maxTete) + 1)