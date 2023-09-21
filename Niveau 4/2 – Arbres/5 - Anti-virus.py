def checkMask(element, mask):
  element = str(element)
  if(len(element) == len(mask)):
    for i in range(len(element)):
      if(mask[i] != '?' and mask[i] != element[i]):
        return False
    return True
  return False
def main():
  nbProduits = int(input())
  produits = list(map(int, input().split()))
  tree = [[] for i in range(nbProduits + 1)]
  for i in range(nbProduits):
    tree[produits[i]].append(i + 1)
  mask = input()
  nodes = [0]
  while(len(nodes) != 0):
    currentNode = nodes.pop(0)
    if(currentNode != 0 and checkMask(currentNode, mask)):
      print(currentNode, end=" ")
    for i in range(len(tree[currentNode])):
      child = tree[currentNode][i]
      nodes.append(child)

main()