def recur(str, count):
  if count == 0:
    return "".join(str)
  str.insert(0, '[')
  str.append(']')
  return recur(str, count - 1)  

def main():
  nb1, nb2 = map(int, input().split())
  print(recur(list(str(nb1)), nb2))

main()