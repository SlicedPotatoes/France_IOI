import sys
def main():
    identifiant = int(sys.stdin.readline())
    nbRelation = int(sys.stdin.readline())
    myFriends = set()
    notMyFriends = set()
    relations = []
    for i in range(nbRelation):
        id1, id2 = map(int, sys.stdin.readline().split())
        if id1 == identifiant: myFriends.add(id2)
        elif id2 == identifiant: myFriends.add(id1)
        else : relations.append((id1, id2))
    for i in range(len(relations)):
        id1, id2 = relations[i]
        if id1 in myFriends and not(id2 in myFriends) and not(id2 in notMyFriends):
            notMyFriends.add(id2)
        elif id2 in myFriends and not(id1 in myFriends) and not(id1 in notMyFriends):
            notMyFriends.add(id1)
    print(len(notMyFriends))

main()
