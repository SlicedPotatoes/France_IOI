popTotal = int(input())
malade = 1
jour = 1
while malade < popTotal:
    malade += malade + malade
    jour += 1
print(jour)