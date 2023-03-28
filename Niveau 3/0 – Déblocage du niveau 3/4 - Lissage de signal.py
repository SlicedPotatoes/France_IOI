def getMaxDiff(arr):
   d = 0
   for i in range(len(arr)):
      if i != 0:
            _d = abs(arr[i] - arr[i-1])
            if _d > d:
                d = _d
   return d
nbMesures = int(input())
diffMax = float(input())
signals = [0] * nbMesures
_signals = [0] * nbMesures
nbLissage = 0
for i in range(nbMesures):
    signals[i] = float(input())
    _signals[i] = signals[i]
actualDiffMax = getMaxDiff(signals)
while actualDiffMax > diffMax:
    for i in range(nbMesures):
        if i != 0 and i != nbMesures - 1:
            _signals[i] = (signals[i-1]+signals[i+1]) / 2
    actualDiffMax = getMaxDiff(_signals)
    nbLissage += 1
    signals = _signals[:]
print(nbLissage)
