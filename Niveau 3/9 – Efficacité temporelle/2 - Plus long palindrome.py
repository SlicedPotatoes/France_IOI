def main():
    line = input()
    length = len(line)
    actualMaxLength = 1
    for pivot in range(length):
        for i in range(2):
            _length = 1
            end = False
            while not (end):
                end = True
                indiceA = pivot - _length
                indiceB = pivot + _length - (1 if i % 2 == 0 else 0)
                if (indiceA >= 0) and (indiceB < length) and line[indiceA] == line[indiceB]:
                    _length += 1
                    end = False
                elif _length > 1:
                    a = indiceB - indiceA - 1
                    if a > actualMaxLength:
                        actualMaxLength = a
    print(actualMaxLength)


main()
