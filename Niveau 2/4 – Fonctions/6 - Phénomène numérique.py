def suite(a):
    if a % 2 == 0:
        return int(a / 2)
    else:
        return a * 3 + 1
val = int(input())
while val != 1:
   val = suite(val)
   print(val, end=" ")