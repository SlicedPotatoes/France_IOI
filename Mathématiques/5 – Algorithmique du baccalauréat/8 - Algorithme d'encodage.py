arr = "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z".split(" ")
mot = input()
v1 = arr.index(mot[0])
v2 = arr.index(mot[1])

_v1 = ((11 * v1) + (3 * v2)) % 26
_v2 = ((7 * v1) + (4 * v2)) % 26
print("{}{}".format(arr[_v1], arr[_v2]))