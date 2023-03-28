import sys
def nombreAmour(s):
    a = ord('A')
    sum = 0
    for i in range(len(s)):
            sum += ord(s[i]) - a
    while sum >= 10:
        s = str(sum)
        sum = 0
        for i in range(len(s)):
             sum += int(s[i])
    return sum
def main():
    p1, p2 = input().split(' ')#sys.stdin.readline().split(' ')
    _p1 = nombreAmour(p1)
    _p2 = nombreAmour(p2)
    sys.stdout.write(str(_p1) + " " + str(_p2))

main()