from robot import *
for loop in range(15):
   if nbAuSol() == 1:
      ramasse()
   if nbDansSac() >= 3:
      depose()
      depose()
      depose()
   avance()