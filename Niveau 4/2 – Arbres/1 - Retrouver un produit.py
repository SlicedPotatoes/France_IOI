class Node:
    def __init__(self, value):
        self.value = value
        self.childs = []

    def add_child(self, child):
        self.childs.append(child)

    def __str__(self) -> str:
        return str(self.value)


def create_tree(position, N):
    nodes = [Node(i) for i in range(N+1)]  # Create Nodes

    for i in range(N):  # Create Link
        pos = position[i]
        nodes[pos].add_child(nodes[i+1])

    return nodes[0]  # Return Root


def find_path(node, search, path):
    path.append(node)  # Add current Node to path
    if node.value == search:  # If we found the desired node return path
        return path
    # For each child in node
    for child in node.childs:
        # recursively calls the find_path() function to explore its subtrees.
        child_path = find_path(child, search, path)
        if child_path is not None:  # if value found in subtrees of child, return path
            return child_path
    path.pop()  # Remove current node because it did not lead to the search value
    return None  # Return None if search value not found in all subtrees from actual Node


def main():
    N = int(input())
    position = list(map(int, input().split()))
    R = int(input())
    object = list(map(int, input().split()))
    tree = create_tree(position, N)

    for i in range(R):
        path = find_path(tree, object[i], [])
        path_values = [str(node) for node in path if node.value != 0]
        print(" ".join(path_values))


main()
