from robot import *
a = True
for loop in range(19):
   if obstacleEst():
      if a:
         sud()
      else:
         nord()
      a = not(a)
   est()