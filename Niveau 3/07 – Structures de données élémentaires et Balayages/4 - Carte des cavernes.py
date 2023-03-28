def main():
  n = int(input())
  expP = list("".join(input().split(' ')))
  _exp = []
  b = True
  for i in range(len(expP)):
    if expP[i] == '(':
      _exp.append(i)
    else:
      try:
        _exp.pop()
      except:
        b = False
        break
  print(1 if b and len(_exp) == 0 else 0)
main()