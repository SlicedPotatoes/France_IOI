import sys
class Node:
  def __init__(self, value):
     self.value = value
     self.childs = []
  def add_child(self, child):
     self.childs.append(child)
def findLongestPath(node, depth):
   if len(node.childs) == 0: # Return la longeur quand on arrive a une feuille de l'arbre
      return depth
   maxDepth = 0
   for child in node.childs: # Parcours les enfants de la node actuelle 
      d = findLongestPath(child, depth + 1) # profondeur pour l'enfant actuel
      if d > maxDepth: # Garde la profondeur la plus grande pour chaque enfant
         maxDepth = d
   return maxDepth
      
def main():
    N = int(input())
    sys.setrecursionlimit(N*2)
    position = list(map(int, input().split()))
    nodes = []
    for i in range(N + 1):
       nodes.append(Node(i))
    
    for i in range(N):
       pos = position[i]
       nodes[pos].add_child(nodes[i+1])
    print(findLongestPath(nodes[0], 0))
main()