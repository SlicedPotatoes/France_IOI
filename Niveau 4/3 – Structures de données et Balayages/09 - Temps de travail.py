def main():
  nbIntervales = int(input())
  arr = []
  
  for i in range(nbIntervales):
     a, b = map(int, input().split())
     arr.append((a, b))
     
  arr.sort()
  
  ans = 0
  last = -1
  
  for element in arr:
     start = element[0]
     end = element[1]
     
     if start < last:
        start = last
     
     if start > end:
        continue
        
     last = end
     
     ans += end - start
  
  print(ans)

main()