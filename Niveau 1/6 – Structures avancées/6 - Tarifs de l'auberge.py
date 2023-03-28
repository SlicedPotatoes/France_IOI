age = int(input())
poids = int(input())
if age == 60:
   print(0)
elif age < 10:
   print(5)
else:
   if poids >= 20:
      print(40)
   else:
      print(30)