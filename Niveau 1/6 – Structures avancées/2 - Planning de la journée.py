myPos = int(input())
nbVillage = int(input())
c = 0
for i in range(nbVillage):
   if myPos-50 <= int(input()) <= myPos+50:
      c += 1
print(c)