def main():
    nb, base = map(int, input().split())
    arr = []
    while nb > 0:
        arr.append(nb % base)
        nb = nb // base
    if len(arr) == 0:
        print(1)
        print(0)
    else:
      print(len(arr))
      arr = arr[::-1]
      print(" ".join(str(x) for x in arr))


main()
