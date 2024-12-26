# Linked Lists in Data Structures and Algorithms

## Table of Contents
1. [Introduction](#introduction)
2. [Types of Linked Lists](#types-of-linked-lists)
3. [Basic Operations](#basic-operations)
4. [Advantages of Linked Lists](#advantages-of-linked-lists)
5. [Disadvantages of Linked Lists](#disadvantages-of-linked-lists)
6. [Applications of Linked Lists](#applications-of-linked-lists)
7. [Resources for Learning](#resources-for-learning)

---

## Introduction
A linked list is a linear data structure where elements (called nodes) are connected using pointers. Each node contains two parts:
- **Data**: The value stored in the node.
- **Pointer (or reference)**: A reference to the next node in the sequence.

Unlike arrays, linked lists do not have fixed sizes, making them more flexible for dynamic memory allocation.

---

## Types of Linked Lists

### 1. Singly Linked List
- Each node points to the next node in the sequence.
- The last node points to `NULL`.
- Operations:
    - Insert at the beginning, end, or middle.
    - Delete a node.

### 2. Doubly Linked List
- Each node has two pointers:
    - A pointer to the next node.
    - A pointer to the previous node.
- Allows traversal in both directions.

### 3. Circular Linked List
- The last node points to the first node, forming a circular structure.
- Can be singly or doubly linked.

### 4. Doubly Circular Linked List
- Combines the properties of doubly linked and circular linked lists.

---

## Basic Operations

### 1. Traversal
- Visit each node in the list sequentially.
- Complexity: O(n)

### 2. Insertion
- **At the Beginning**:
    - Adjust the pointer of the new node to point to the current head.
    - Update the head to the new node.
- **At the End**:
    - Traverse to the last node.
    - Adjust its pointer to the new node.
    - Update the new node's pointer to `NULL`.
- **At a Specific Position**:
    - Traverse to the desired position.
    - Update pointers to insert the new node.

### 3. Deletion
- **From the Beginning**:
    - Update the head to the second node.
    - Free the memory of the removed node.
- **From the End**:
    - Traverse to the second-last node.
    - Update its pointer to `NULL`.
    - Free the memory of the last node.
- **From a Specific Position**:
    - Traverse to the node before the target node.
    - Update pointers to bypass the target node.
    - Free the memory of the removed node.

### 4. Searching
- Traverse the list while checking each node's data.
- Complexity: O(n)

### 5. Reversing a Linked List
- Adjust the pointers of each node to point to the previous node.
- Complexity: O(n)

---

## Advantages of Linked Lists
1. **Dynamic Size**:
    - Can grow or shrink during runtime.
2. **Efficient Insertion/Deletion**:
    - No need to shift elements, unlike arrays.
3. **Efficient Memory Utilization**:
    - Allocates memory as needed.

---

## Disadvantages of Linked Lists
1. **Higher Memory Usage**:
    - Requires extra memory for pointers.
2. **Sequential Access**:
    - Cannot directly access an element by index.
3. **Complexity**:
    - Implementation is more complex compared to arrays.

---

## Applications of Linked Lists
1. **Dynamic Memory Allocation**
2. **Implementation of Stacks and Queues**
3. **Graph Representation (Adjacency List)**
4. **Browser History and Undo Operations**
5. **Polynomial Manipulations**
