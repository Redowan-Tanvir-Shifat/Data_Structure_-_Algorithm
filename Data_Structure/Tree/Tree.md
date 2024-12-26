# Trees and Binary Search Trees (BST) in Data Structures and Algorithms

## Table of Contents
1. [Introduction to Trees](#introduction-to-trees)
2. [Types of Trees](#types-of-trees)
3. [Tree Terminology](#tree-terminology)
4. [Introduction to Binary Search Tree (BST)](#introduction-to-binary-search-tree)
5. [Operations on BST](#operations-on-bst)
6. [Applications of Trees and BST](#applications-of-trees-and-bst)
7. [Comparison Between Trees and BST](#comparison-between-trees-and-bst)
8. [Resources for Learning](#resources-for-learning)

---

## Introduction to Trees
A **tree** is a hierarchical data structure consisting of nodes connected by edges. It is a non-linear structure used to represent relationships among data.

### Characteristics of Trees:
- The topmost node is called the **root**.
- Each node can have zero or more child nodes.
- Nodes with no children are called **leaf nodes**.
- A tree does not contain any cycles.

---

## Types of Trees

### 1. General Tree
- Each node can have any number of children.

### 2. Binary Tree
- Each node can have at most two children (left and right).

### 3. Binary Search Tree (BST)
- A binary tree with the following properties:
    - Left subtree contains values less than the parent.
    - Right subtree contains values greater than the parent.

### 4. AVL Tree
- A self-balancing binary search tree where the height difference between the left and right subtrees is at most 1.

### 5. B-Tree
- A self-balancing search tree optimized for disk storage.

### 6. Heap
- A complete binary tree used for heap-based operations.

---

## Tree Terminology
- **Root**: The topmost node in the tree.
- **Parent**: A node that has child nodes.
- **Child**: A node that is a descendant of another node.
- **Leaf**: A node with no children.
- **Height**: The number of edges in the longest path from a node to a leaf.
- **Depth**: The number of edges from the root to the node.
- **Subtree**: A tree formed by any node and its descendants.

---

## Introduction to Binary Search Tree (BST)
A **Binary Search Tree (BST)** is a binary tree with the property that:
1. For each node, values in the left subtree are less than the node's value.
2. Values in the right subtree are greater than the node's value.

### Characteristics of BST:
- Ensures efficient search, insertion, and deletion operations.
- Maintains sorted order of elements.

---

## Operations on BST

### 1. Insertion
- Start at the root and traverse left or right based on comparison.
- Insert the new node at the appropriate position.
- Complexity: O(h), where h is the height of the tree.

### 2. Deletion
- Three cases:
    1. Node to be deleted is a leaf.
    2. Node to be deleted has one child.
    3. Node to be deleted has two children (replace with the in-order successor or predecessor).
- Complexity: O(h)

### 3. Search
- Start at the root and traverse left or right based on comparison.
- Complexity: O(h)

### 4. Traversals
- **In-Order (Left, Root, Right)**:
    - Produces sorted order of elements.
- **Pre-Order (Root, Left, Right)**:
    - Useful for creating a copy of the tree.
- **Post-Order (Left, Right, Root)**:
    - Useful for deleting nodes in a tree.

---

## Applications of Trees and BST
1. **Trees**:
    - Represent hierarchical data (e.g., file systems, organizational structures).
    - Syntax trees in compilers.
    - Network routing algorithms.

2. **Binary Search Trees**:
    - Searching and sorting algorithms.
    - Database indexing.
    - Dynamic sets and priority queues.

---

## Comparison Between Trees and BST

| Feature              | Tree                       | Binary Search Tree (BST)       |
|----------------------|---------------------------|---------------------------------|
| Structure            | Hierarchical              | Hierarchical with sorted order |
| Children per Node    | Depends on tree type      | At most 2                      |
| Traversal Efficiency | Depends on type           | O(h) for most operations       |
| Use Cases            | General-purpose           | Searching, sorting, and indexing |
