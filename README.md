# CE Algorithms & Data Structures

Implementations of core data structures and algorithms in **C++** and **Python**, designed as a clean portfolio for Computer Engineering graduate/PhD applications.

## Contents

### Data Structures
- Linked List (C++/Python) *(expanding)*

### Sorting
- Merge Sort (C++/Python)

### Graph Algorithms
- BFS / DFS (C++/Python)

## How to run (C++)

```bash
g++ cpp/data_structures/linked_list.cpp -o linked_list && ./linked_list
g++ cpp/sorting/merge_sort.cpp -o merge_sort && ./merge_sort
g++ cpp/graphs/bfs_dfs.cpp -o bfs_dfs && ./bfs_dfs# ce-algorithms-and-data-structures
Implementations of core data structures and algorithms in C++ and Python
## Time & Space Complexity

| Algorithm / Structure | Operation | Time Complexity | Space Complexity |
|-----------------------|-----------|-----------------|------------------|
| Linked List           | Insert    | O(1)            | O(1)             |
| Linked List           | Delete    | O(1)            | O(1)             |
| Merge Sort            | Sort      | O(n log n)      | O(n)             |
| BFS                   | Traverse  | O(V + E)        | O(V)             |
| DFS                   | Traverse  | O(V + E)        | O(V)             |