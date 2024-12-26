# Graphs in Data Structures and Algorithms

## Table of Contents
1. [Introduction](#introduction)
2. [Graph Terminology](#graph-terminology)
3. [Types of Graphs](#types-of-graphs)
4. [Graph Representation](#graph-representation)
    - [Adjacency Matrix](#adjacency-matrix)
    - [Adjacency List](#adjacency-list)
5. [Graph Traversal Techniques](#graph-traversal-techniques)
    - [Breadth-First Search (BFS)](#breadth-first-search-bfs)
    - [Depth-First Search (DFS)](#depth-first-search-dfs)
6. [Graph Algorithms](#graph-algorithms)
    - [Shortest Path Algorithms](#shortest-path-algorithms)
    - [Minimum Spanning Tree Algorithms](#minimum-spanning-tree-algorithms)
    - [Topological Sorting](#topological-sorting)
    - [Cycle Detection](#cycle-detection)
7. [Applications of Graphs](#applications-of-graphs)
8. [Resources for Learning](#resources-for-learning)

---

## Introduction
A graph is a non-linear data structure consisting of nodes (vertices) and edges that connect pairs of nodes. Graphs are widely used to model relationships in real-world scenarios such as social networks, road maps, and network routing.

---

## Graph Terminology
1. **Vertex (Node)**: Fundamental unit of a graph.
2. **Edge**: Connection between two vertices.
3. **Degree**: Number of edges connected to a vertex.
    - In-degree: Edges directed toward a vertex (for directed graphs).
    - Out-degree: Edges directed away from a vertex (for directed graphs).
4. **Path**: Sequence of vertices where each pair of adjacent vertices is connected by an edge.
5. **Cycle**: Path that starts and ends at the same vertex.
6. **Connected Graph**: All vertices are reachable from any vertex.
7. **Disjoint Graph**: Graph consisting of disconnected components.

---

## Types of Graphs
1. **Directed Graph (Digraph)**: Edges have a direction.
2. **Undirected Graph**: Edges do not have a direction.
3. **Weighted Graph**: Edges have associated weights.
4. **Unweighted Graph**: Edges have no weights.
5. **Cyclic Graph**: Contains at least one cycle.
6. **Acyclic Graph**: Does not contain any cycles.
7. **Complete Graph**: Every pair of vertices is connected by an edge.
8. **Sparse Graph**: Contains few edges relative to the number of vertices.
9. **Dense Graph**: Contains many edges relative to the number of vertices.

---

## Graph Representation

### Adjacency Matrix
- A 2D array where the element at row `i` and column `j` represents the presence (and possibly weight) of an edge between vertices `i` and `j`.
- **Space Complexity**: O(V²)
- **Advantages**:
    - Simple to implement.
    - Efficient for dense graphs.
- **Disadvantages**:
    - High memory usage for sparse graphs.

### Adjacency List
- A list where each vertex has its own list of adjacent vertices.
- **Space Complexity**: O(V + E)
- **Advantages**:
    - Efficient for sparse graphs.
    - Saves memory.
- **Disadvantages**:
    - Slightly more complex to implement.

---

## Graph Traversal Techniques

### Breadth-First Search (BFS)
- Explores all neighbors at the current depth before moving to the next depth level.
- **Time Complexity**: O(V + E)
- **Applications**:
    - Shortest path in unweighted graphs.
    - Level-order traversal in trees.

### Depth-First Search (DFS)
- Explores as far as possible along each branch before backtracking.
- **Time Complexity**: O(V + E)
- **Applications**:
    - Cycle detection.
    - Topological sorting.

---

## Graph Algorithms

### Shortest Path Algorithms
1. **Dijkstra's Algorithm**:
    - Finds the shortest path from a source vertex to all other vertices in a weighted graph.
    - **Time Complexity**: O((V + E) log V)
2. **Bellman-Ford Algorithm**:
    - Handles graphs with negative weights.
    - **Time Complexity**: O(VE)
3. **Floyd-Warshall Algorithm**:
    - Finds shortest paths between all pairs of vertices.
    - **Time Complexity**: O(V³)

### Minimum Spanning Tree Algorithms
1. **Prim's Algorithm**:
    - Greedy algorithm for finding the Minimum Spanning Tree (MST).
    - **Time Complexity**: O((V + E) log V)
2. **Kruskal's Algorithm**:
    - Greedy algorithm that uses edge sorting.
    - **Time Complexity**: O(E log E)

### Topological Sorting
- Linear ordering of vertices such that for every directed edge (u, v), vertex `u` comes before `v`.
- **Applications**: Scheduling, dependency resolution.

### Cycle Detection
- **Directed Graphs**: Use DFS with a recursion stack.
- **Undirected Graphs**: Use DFS or Union-Find.

---

## Applications of Graphs
1. Social networks (friendship connections, recommendations).
2. Navigation systems (Google Maps, GPS).
3. Network routing and flow.
4. Dependency management (package managers like npm, Maven).
5. Biology (protein interaction networks, gene regulation).