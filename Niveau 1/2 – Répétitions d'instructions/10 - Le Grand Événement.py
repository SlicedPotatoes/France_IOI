from robot import *
haut()
for i in range(10):
   for j in range(8):
      if i % 2 == 0:
         haut()
      else:
         bas()
   if i != 9:
      droite()
   else:
      bas()
for i in range(9):
   gauche()