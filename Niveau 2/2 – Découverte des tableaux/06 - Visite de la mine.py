totalDep = int(input())
dep = [0] * totalDep
depHelper = [0, 2, 1, 3, 5, 4]
for i in range(totalDep):
    dep[i] = int(input())
for i in range(totalDep-1, -1, -1):
    print(depHelper[dep[i]])