import sys

def main():
  K, N = map(int, input().split())
  rivieres = list(map(int, sys.stdin.readline().split()))
  somme = sum(rivieres[:K])
  min = somme
  for i in range(K, N):
    somme += rivieres[i] - rivieres[i-K]
    if somme > min:
      min = somme
  print(min)

main()