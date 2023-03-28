def recur(str, count):
  if count == 0:
    return "0 = " + str
  return recur(str.replace("0", "(0 + 0)"), count-1)
  

def main():
  n = int(input())
  print(recur("0", n))

main()