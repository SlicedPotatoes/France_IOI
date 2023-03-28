nbJour = int(input())
m = 0
for i in range(nbJour):
   d = int(input())
   if d > m:
      m = d
print(m)