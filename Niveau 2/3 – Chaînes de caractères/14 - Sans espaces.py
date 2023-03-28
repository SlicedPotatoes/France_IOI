text = list(input())
for i in range(len(text)):
   if text[i] == " ":
      text[i] = "_"
print("".join(text))