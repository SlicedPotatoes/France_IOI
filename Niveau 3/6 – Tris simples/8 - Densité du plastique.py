import sys
def main():
  n = int(input())
  densite = set(map(int, sys.stdin.readline().split()))
  nbQuestion = int(sys.stdin.readline())
  for i in range(nbQuestion):
    _densite = int(sys.stdin.readline())
    if _densite in densite: print(1)
    else: print(0)

main()