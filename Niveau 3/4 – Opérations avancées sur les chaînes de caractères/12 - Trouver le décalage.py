#Ce code ne passe pas tout les tests car il n'est pas assez rapide
def encode_decalage(text, decalage):
    _text = [""] * len(text)
    for i, c in enumerate(text):
        if c.isalpha():
            a = ord('a') if c.islower() else ord('A')
            _c = (ord(c) - a + decalage) % 26
            _text[i] = chr(_c + a)
        else:
            _text[i] = c
    return "".join(_text)
    
def probaTextFrancais(text):
    proba = {0:8.15, 1:0.97, 2:3.15, 3:3.73, 4:17.39, 5:1.12, 6:0.97, 7:0.85, 8:7.31, 9:0.45, 10:0.02, 11:5.69, 12:2.87, 13:7.12, 14:5.28, 15:2.80, 16:1.21, 17:6.64, 18:8.14, 19:7.22, 20:6.38, 21:1.64, 22:0.03, 23:0.41, 24:0.28, 25:0.15}
    frequence = [0] * 26
    for c in text:
        if 'a' <= c <= 'z':
            frequence[ord(c) - ord('a')] += 1
        elif 'A' <= c <= 'Z':
            frequence[ord(c) - ord('A')] += 1
    lenStr = len(text)
    score = 0
    for i in range(26):
        p = (frequence[i] / lenStr) * 100
        score += abs(proba[i] - p)
    return score

def main():
    text = input()
    scoreMin = float('inf')
    _text = ""
    for i in range(26):
        t = encode_decalage(text, i)
        score = probaTextFrancais(t)
        if score < scoreMin:
            scoreMin = score
            _text = t
    print(_text)
main()