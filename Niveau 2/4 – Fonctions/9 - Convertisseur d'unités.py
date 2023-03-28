def convertMInPied(a):
    return round(a / 0.3048, 6)
def convertGInLivre(a):
    return round(a * 0.002205, 6)
def convertCInF(a):
    return round(32 + (1.8*a), 6)
nbConversion = int(input())
for i in range(nbConversion):
    value = input().split(' ')
    if value[1] == "m":
        print("{} p".format(convertMInPied(float(value[0]))))
    elif value[1] == "g":
        print("{} l".format(convertGInLivre(float(value[0]))))
    else:
        print("{} f".format(convertCInF(float(value[0]))))
