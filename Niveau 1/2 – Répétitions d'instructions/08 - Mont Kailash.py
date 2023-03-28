from robot import *
for i in range(108):
   for j in range(4):
      for k in range(13):
         if j == 0:
            haut()
         elif j == 1:
            droite()
         elif j == 2:
            bas()
         else:
            gauche()