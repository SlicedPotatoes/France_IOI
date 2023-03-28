def solve(line):
    if len(line) == 0:
        return
    print(line.pop(-1), end="")
    solve(line)


def main():
    line = list(input())
    solve(line)


main()
