def main():
    nbBonus = int(input())
    arr = list(map(int, input().split()))
    bonus = [[],[],[],[],[]]
    for i in range(nbBonus):
        bonus[arr[i] - 1].append(i)
    for i in range(5):
        bonus[i].reverse()
    tour = 0
    end = False
    while not(end):
        lastMin = nbBonus
        for i in range(4, -1, -1):
            while len(bonus[i]) > 0 and bonus[i][0] > lastMin:
                bonus[i].remove(bonus[i][0])
            if(len(bonus[i]) > 0):
                lastMin = bonus[i][0]
                bonus[i].remove(bonus[i][0])
            else:
                end = True
        if not end:
            tour+=1
    print(tour)
main()