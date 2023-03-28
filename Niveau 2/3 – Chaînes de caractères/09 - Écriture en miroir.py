for i in range(int(input())):
   line = input()
   for j in range(len(line)-1, -1, -1):
      print(line[j], end="")
   print()