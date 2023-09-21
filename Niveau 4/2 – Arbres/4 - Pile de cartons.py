import sys
def dfs(node, tree):
    for i in range(len(node)):
        print("A", node[i])
        dfs(tree[node[i]], tree)
        print("R", node[i])
def main():
    nbCartons = int(input())
    tree = [[]for i in range(nbCartons + 1)]
    for i in range(nbCartons + 1):
        inputLine = list(map(int, sys.stdin.readline().split()))
        nbInscription = inputLine[0]
        for j in range(1, nbInscription + 1):
            tree[i].append(int(inputLine[j]))
    dfs(tree[0], tree)
main()