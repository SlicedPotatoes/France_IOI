pos = 0
neg = 0
for i in range(int(input())):
   a = int(input())
   if a > 0:
      pos += a
   elif a < 0:
      neg += a
print(pos)
print(-neg)