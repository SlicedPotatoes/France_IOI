def main():
  nbBacDep, bacAInsert = map(int, input().split())
  bacs = list(map(int, input().split()))
  bacsToInsert = list(map(int, input().split()))
  for i in range(bacAInsert):
    bac = bacsToInsert[i]
    for j in range(len(bacs)):
      if bacs[j] >= bac:
        print(j, end=" ")
        bacs.insert(j, bac)
        break
    else: 
      bacs.append(bac)
      print(len(bacs)-1, end=" ")
  print()
  for b in bacs:
    print(b, end=" ")
main()