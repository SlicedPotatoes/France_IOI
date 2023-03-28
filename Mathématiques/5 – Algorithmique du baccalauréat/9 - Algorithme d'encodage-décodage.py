arr = "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z".split(" ")
mot = input()
a, b, c, d = [int(input()), int(input()), int(input()), int(input())]
for i in range(0, len(mot), 2):
    v1 = arr.index(mot[i])
    v2 = arr.index(mot[i+1])
    _v1 = ((a * v1) + (b * v2)) % 26
    _v2 = ((c * v1) + (d * v2)) % 26
    print("{}{}".format(arr[_v1], arr[_v2]), end="")
