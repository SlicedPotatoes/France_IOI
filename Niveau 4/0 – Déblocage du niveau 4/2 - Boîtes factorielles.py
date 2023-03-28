def main():
    nbPetitsPois = int(input())
    listBoite = [0] * 12
    p = 0
    while nbPetitsPois != 0:
        fac = 0
        arr = [factorielle(fac+1)]
        while arr[fac] <= nbPetitsPois:
            fac += 1
            arr.append(factorielle(fac+1))
        nbPetitsPois -= arr[fac-1]
        b = 0 if fac == 0 else fac-1
        listBoite[b] += 1
        if b > p:
            p = b
    print(p+1)
    for i in range(len(listBoite)):
        print(listBoite[i], end=" ")
        if i == p:
            break

def factorielle(n):
    f = 1
    for i in range(n):
        f *= i+1
    return f

main()
