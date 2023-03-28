def findMinNotOrdered(arr):
  element = -1
  for i in range(0, len(arr)):
    if arr[i] != i+1: 
      element = i+1
      break

  for i in range(0, len(arr)):
      if arr[i] == element:
        return i
  return -1
    

def main():
  nbAutomobiles = int(input())
  automobiles = list(map(int, input().split()))
  element = findMinNotOrdered(automobiles)
  count = 0
  listChange = []
  while element != -1:
    auto = automobiles[element]
    while automobiles[auto - 1] != auto:
      automobiles[element] = automobiles[element - 1]
      automobiles[element - 1] = auto
      listChange.append([automobiles[element], automobiles[element-1]])
      element -= 1
      count += 1
    element = findMinNotOrdered(automobiles)
  print(count)
  for c in listChange:
    print(c[0], c[1])
main()