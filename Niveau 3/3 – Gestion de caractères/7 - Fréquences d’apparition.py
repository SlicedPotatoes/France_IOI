import sys
def main():
    a = ord("A")
    arr = [0] * 26
    text = input().upper()
    nbLettre = 0
    for i in range(len(text)):
        if text[i].isupper():
            nbLettre += 1
            arr[ord(text[i]) - a] += 1
    for i in arr:
        print(i / nbLettre)

main()