import sys
def main():
    rechercher = input()
    text = input().split(' ')
    c = 0
    for m in text:
        if m.lower() == rechercher:
            c += 1
    print(c)
main()