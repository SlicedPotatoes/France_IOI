class data:
  def __init__(self, id, pol):
    self.id = id
    self.pol = pol

def main():
  n = int(input())
  arr = [0] * n
  for i in range(n):
    id, pol = map(int, input().split())
    arr[i] = data(id, pol)
  arr.sort(key=lambda el: (el.pol, el.id))
  for i in arr:
    print(i.id, i.pol, sep=" ")
main()