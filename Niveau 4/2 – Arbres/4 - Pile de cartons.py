import sys
def main():
  nbCartons = int(input())
  for i in range(nbCartons + 1):
    _input = list(map(int, sys.stdin.readline().split()))
    nbInscriptions = _input[0]
    if nbInscriptions != 0:
      inscriptions = _input[1::]
      print(inscriptions)
main()