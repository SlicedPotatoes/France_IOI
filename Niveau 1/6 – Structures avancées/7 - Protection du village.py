from sys import maxsize
nbMaison = int(input())
ppY = maxsize
pgY = -maxsize
ppX = maxsize
pgX = -maxsize
for i in range(nbMaison):
   X = int(input())
   Y = int(input())
   if X < ppX:
      ppX = X
   if X > pgX:
      pgX = X
   if Y < ppY:
      ppY = Y
   if Y > pgY:
      pgY = Y
difX = pgX - ppX
difY = pgY - ppY
print(difX*2+difY*2)