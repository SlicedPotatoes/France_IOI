import sys
class Node:
  def __init__(self, value):
     self.value = value
     self.childs = []
  def add_child(self, child):
     self.childs.append(child)
def findLongestPath(node, depth):
   if len(node.childs) == 0:
      return depth
   maxDepth = 0
   for child in node.childs:
      d = findLongestPath(child, depth + 1)
      if d > maxDepth:
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