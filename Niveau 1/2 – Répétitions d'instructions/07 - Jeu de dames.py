for i in range(40):
   for j in range(40):
      if (i+j)%2 == 0:
         print("O", end="")
      else:
         print("X", end="")
   print()