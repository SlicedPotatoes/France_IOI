import sys
def search(start, end, value, array):
  index = (end + start) // 2
  if start == end:
    if start - 1 >= 0 and abs(array[start] - value) >= abs(array[start-1] - value):
      return array[start-1]
    return array[start]
  elif value <= array[index]:
    return search(start, index, value, array)
  else:
    return search(index + 1, end, value, array)

def main():
  n = int(input())
  densite = sorted(set(map(int, sys.stdin.readline().split())))
  nbQuestion = int(sys.stdin.readline())
  for i in range(nbQuestion):
    _densite = int(sys.stdin.readline())
    print(search(0, n-1, _densite, densite))

main()