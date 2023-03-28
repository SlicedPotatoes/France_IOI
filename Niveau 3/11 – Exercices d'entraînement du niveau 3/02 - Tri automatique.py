def main():
    P = int(input())
    petits = map(int, input().split())
    S = int(input())
    souples = map(int, input().split())
    c = 0
    if P < S:
        petits, souples = set(petits), list(souples)
        for el in souples:
            if el in petits: c+=1
    else:
        petits, souples = list(petits), set(souples)
        for el in petits:
            if el in souples: c+=1
    
    print(c)
main()