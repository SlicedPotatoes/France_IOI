def main():
  n = int(input())
  arr = [0] * n
  for i in range(n):
    arr[i] = input()
  arr.sort()
  for i in arr:
    print(i, sep=" ")
main()