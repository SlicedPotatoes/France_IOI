import sys
def sign(nb):
  return abs(nb) == nb

def main():
  nbOperation = int(input())
  stack = []
  for i in range(nbOperation):
    quantite, date_per = map(int, input().split(' '))
    if sign(quantite):
      stack.append({'q': quantite, 'd': date_per})
    else:
      for j in range(abs(quantite)):
        stack[0]['q'] -= 1
        if stack[0]['q'] == 0:
          stack.pop(0)
  d_min = sys.maxsize
  for s in stack:
    if d_min > s['d']:
      d_min = s['d']
  print(d_min)
main()