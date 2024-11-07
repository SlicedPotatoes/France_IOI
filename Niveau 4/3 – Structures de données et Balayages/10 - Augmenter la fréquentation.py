def main():
   n = int(input())
   arr = []
   
   for i in range(n):
      d, f = map(int, input().split())      
      arr.append((d, f))
      
   arr.sort()

   ans = 0
   total = 0
   maxMoy = 0
   i = 0
   
   for e in arr:
      total += e[1]
      i += 1
      moy = total / i
      
      if moy >= maxMoy:
         maxMoy = moy
         ans = e[0]
   
   print(ans)
main()