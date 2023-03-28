import sys
def getOnlyLengthWord(d, length):
    arr = []
    for _ in range(len(d)):
        element = d[_]
        if len(element) == length: arr.append(element)
    return arr

def getWord(d, char, index):
    arr = []
    for _ in range(len(d)):
        element = d[_]
        for i in range(4):
          if element[index] == char[i]: arr.append(element)
    return arr

def main():
    nbDic = int(input())
    dictionnaire = []
    for _ in range(nbDic):
        dictionnaire.append(sys.stdin.readline().strip())
    nbFrape = int(input())
    dictionnaire = getOnlyLengthWord(dictionnaire, nbFrape)
    for _ in range(nbFrape):
        frape = sys.stdin.readline().strip()
        dictionnaire = getWord(dictionnaire, frape, _)
    print(dictionnaire[0])
        
main()
