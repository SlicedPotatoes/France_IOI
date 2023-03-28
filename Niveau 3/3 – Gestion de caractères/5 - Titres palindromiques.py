import sys
def isPalindrome(str):
    str = "".join(str.split(' ')).upper()
    for i in range(len(str)//2):
        if str[i] != str[len(str) - 1 - i]:
            return False
    return True
def main():
    nbLivres = int(input())
    for i in range(nbLivres):
        titre = input()
        if isPalindrome(titre):
            print(titre)

main()