import sys

def main():
  nbMaisons= int(input())
  maisons = list(map(int, input().split()))

  maisons.sort()
  ans = sys.maxsize

  for i in range(nbMaisons - 1):
     d = abs(maisons[i] - maisons[i + 1])
     ans = min(ans, d)
   
  print(ans)

main()