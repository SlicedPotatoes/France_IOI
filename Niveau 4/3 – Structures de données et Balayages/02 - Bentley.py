def main():
  n = int(input())
  elements = list(map(int, input().split()))
  currentSum = 0
  best = 0
  for i in range(n):
    currentSum = max(elements[i], currentSum + elements[i])
    best = max(best, currentSum)
  print(best)
main()