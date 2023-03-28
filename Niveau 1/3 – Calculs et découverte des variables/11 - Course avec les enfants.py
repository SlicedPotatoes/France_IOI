from robot import *
for i in range(10):
   for j in range(i+1):
      droite()
   ramasser()
   for j in range(i+1):
      gauche()
   deposer()