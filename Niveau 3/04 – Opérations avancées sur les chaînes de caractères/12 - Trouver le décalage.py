texte = input()
effectifs = [0] * 26
for iChar in range(len(texte)):
   char = texte[iChar]
   if char.isalpha():
      _char = ord(char.lower()) - ord("a")
      effectifs[_char] += 1
indexLettrePlusFreq = 0
for i in range(26):
   if effectifs[i] > effectifs[indexLettrePlusFreq]:
      indexLettrePlusFreq = i
decalage = -(indexLettrePlusFreq - (ord("E") -ord("A")))
for iChar in range(len(texte)):
   char = texte[iChar]
   if char.isalpha():
      _char = chr((((ord(char.lower()) - ord('a')) + decalage) % 26) + ord('a'))
      if char.isupper():
        _char = _char.upper()
      char = _char
   print(char, end = "")
print()