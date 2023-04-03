def main():
    N = int(input())
    position = list(map(int, input().split()))
    R = int(input())
    object = list(map(int, input().split()))
    for element in object:
        index = element - 1
        path = [element]
        while position[index] != 0:
            index = position[index]-1
            path.append(index+1)
        print(" ".join(map(str, path[::-1])))
        

main()
