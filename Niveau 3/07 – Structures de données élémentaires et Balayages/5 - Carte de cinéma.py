def main():
  n = int(input())
  listClient = list(map(int, input().split()))
  _c = set()
  for client in listClient:
    if client in _c:
      print(client)
      break
    _c.add(client)
  else:
    print(-1)

main()