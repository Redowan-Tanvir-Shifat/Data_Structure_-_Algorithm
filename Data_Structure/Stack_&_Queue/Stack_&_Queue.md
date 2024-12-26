# Stacks and Queues in Data Structures and Algorithms

## Table of Contents
1. [Introduction to Stacks](#introduction-to-stacks)
2. [Basic Operations of Stacks](#basic-operations-of-stacks)
3. [Applications of Stacks](#applications-of-stacks)
4. [Introduction to Queues](#introduction-to-queues)
5. [Basic Operations of Queues](#basic-operations-of-queues)
6. [Types of Queues](#types-of-queues)
7. [Applications of Queues](#applications-of-queues)
8. [Comparison Between Stacks and Queues](#comparison-between-stacks-and-queues)
9. [Resources for Learning](#resources-for-learning)

---

## Introduction to Stacks
A **stack** is a linear data structure that follows the **LIFO (Last In, First Out)** principle. It means that the last element added to the stack is the first one to be removed.

### Characteristics:
- Elements are added and removed only from the top of the stack.
- Uses a single pointer to keep track of the top element.

### Representation:
A stack can be implemented using:
- Arrays
- Linked Lists

---

## Basic Operations of Stacks

### 1. Push
- Adds an element to the top of the stack.
- Complexity: O(1)

### 2. Pop
- Removes the top element from the stack.
- Complexity: O(1)

### 3. Peek (or Top)
- Returns the top element without removing it.
- Complexity: O(1)

### 4. isEmpty
- Checks if the stack is empty.
- Complexity: O(1)

---

## Applications of Stacks
1. **Expression Evaluation**:
    - Converting infix expressions to postfix/prefix.
    - Evaluating postfix/prefix expressions.
2. **Backtracking**:
    - Undo operations in text editors.
3. **Parsing**:
    - Balancing parentheses.
    - Syntax checking in compilers.
4. **Function Call Management**:
    - Recursive function calls are managed using a stack.

---

## Introduction to Queues
A **queue** is a linear data structure that follows the **FIFO (First In, First Out)** principle. It means that the first element added to the queue is the first one to be removed.

### Characteristics:
- Elements are added at the rear and removed from the front.
- Maintains two pointers:
    - Front: Tracks the first element.
    - Rear: Tracks the last element.

### Representation:
A queue can be implemented using:
- Arrays
- Linked Lists

---

## Basic Operations of Queues

### 1. Enqueue
- Adds an element to the rear of the queue.
- Complexity: O(1)

### 2. Dequeue
- Removes the front element from the queue.
- Complexity: O(1)

### 3. Front
- Returns the front element without removing it.
- Complexity: O(1)

### 4. isEmpty
- Checks if the queue is empty.
- Complexity: O(1)

---

## Types of Queues

### 1. Simple Queue
- Follows the FIFO principle strictly.

### 2. Circular Queue
- Connects the rear to the front, making the structure circular.
- Optimizes memory usage by reusing empty spaces.

### 3. Priority Queue
- Each element has a priority, and elements with higher priority are dequeued first.

### 4. Deque (Double-Ended Queue)
- Allows insertion and deletion from both ends.

---

## Applications of Queues
1. **Scheduling**:
    - CPU task scheduling.
    - Disk scheduling algorithms.
2. **Data Stream Management**:
    - Handling requests in web servers.
3. **Breadth-First Search (BFS)**:
    - Graph traversal algorithms.
4. **Order Management**:
    - Managing orders in e-commerce.

---

## Comparison Between Stacks and Queues

| Feature        | Stack                     | Queue                     |
|----------------|---------------------------|---------------------------|
| Principle      | LIFO (Last In, First Out) | FIFO (First In, First Out) |
| Insertion      | At the top                | At the rear               |
| Deletion       | From the top              | From the front            |
| Use Cases      | Backtracking, parsing     | Scheduling, BFS           |
