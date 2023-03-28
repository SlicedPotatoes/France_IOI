socle1 = int(input())
socle2 = int(input())
vol = 0
for i in range(socle1 - socle2+1):
   vol += (socle2+i) ** 2
print(vol)