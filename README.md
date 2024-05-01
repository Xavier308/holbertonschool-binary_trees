# C - Binary Trees

## Master Project

### By: Alexandre Gautier  
### Team Members: Xavier Cruz, William Pellot, John Lopez Cabrera, Steven Rosario  
### Weight: 5  

---

## Resources

- [Binary tree (Not to be confused with B-tree)](https://en.wikipedia.org/wiki/Binary_tree)
- [Data Structure and Algorithms - Tree](https://www.geeksforgeeks.org/tree-data-structure/)
- [Tree Traversal](https://www.geeksforgeeks.org/tree-traversal-inorder-preorder-and-postorder/)
- [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)
- [Data structures: Binary Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)

## Learning Objectives

- Understand what a binary tree is.
- Differentiate between a binary tree and a Binary Search Tree.
- Explain the possible gain in terms of time complexity compared to linked lists.
- Identify the depth, height, and size of a binary tree.
- Describe different traversal methods to traverse a binary tree.
- Understand what a complete, full, perfect, and balanced binary tree is.

## Requirements

- **General Requirements:**
  - Use allowed editors: `vi`, `vim`, or `emacs`.
  - Compile files using GCC on Ubuntu 20.04 LTS with the following options: `-Wall -Werror -Wextra -pedantic -std=gnu89`.
  - End all files with a new line.
  - Include a `README.md` file in the root of the project.
  - Follow the Betty coding style, checked with `betty-style.pl` and `betty-doc.pl`.
  - Avoid global variables.
  - Limit each file to a maximum of 5 functions.
  - The prototypes for all functions should be in `binary_trees.h`.
  - Header files must be include-guarded.

## Data Structures

### Basic Binary Tree

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

## Binary Search Tree

```shell
typedef struct binary_tree_s bst_t;
```
## AVL Tree

```shell
typedef struct binary_tree_s avl_t;

```
## Max Binary Heap

```shell
typedef struct binary_tree_s heap_t;
```
## Tasks

### 0. New Node
-Function: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
-Description: Creates a new binary tree node.

### 1. Insert Left
-Function: binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
-Description: Inserts a node as the left child of another node.
 
### 2. Insert Right
-Function: binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
-Description: Inserts a node as the right child of another node.
 
### 3. Delete
-Function: void binary_tree_delete(binary_tree_t *tree);
-Description: Deletes an entire binary tree.
 
### 4. Is Leaf
-Function: int binary_tree_is_leaf(const binary_tree_t *node);
-Description: Checks if a node is a leaf.
 
### 5. Is Root
-Function: int binary_tree_is_root(const binary_tree_t *node);
-Description: Checks if a given node is a root.
 
### 6. Pre-order Traversal
-Function: void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
-Description: Goes through a binary tree using pre-order traversal.
 
### 7. In-order Traversal
-Function: void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
-Description: Goes through a binary tree using in-order traversal.
 
### 8. Post-order Traversal
-Function: void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
-Description: Goes through a binary tree using post-order traversal.
 
### 9. Height
-Function: size_t binary_tree_height(const binary_tree_t *tree);
-Description: Measures the height of a binary tree.
 
### 10. Depth
-Function: size_t binary_tree_depth(const binary_tree_t *tree);
-Description: Measures the depth of a node in a binary tree.
 
### 11. Size
-Function: size_t binary_tree_size(const binary_tree_t *tree);
-Description: Measures the size of a binary tree.
 
### 12. Leaves
-Function: size_t binary_tree_leaves(const binary_tree_t *tree);
-Description: Counts the leaves in a binary tree.
 
### 13. Nodes
-Function: size_t binary_tree_nodes(const binary_tree_t *tree);
-Description: Counts the nodes with at least one child in a binary tree.
 
### 14. Balance Factor
-Function: int binary_tree_balance(const binary_tree_t *tree);
-Description: Measures the balance factor of a binary tree.
 
### 15. Is Full
-Function: int binary_tree_is_full(const binary_tree_t *tree);
-Description: Checks if a binary tree is full.
 
### 16. Is Perfect
-Function: int binary_tree_is_perfect(const binary_tree_t *tree);
-Description: Checks if a binary tree is perfect.
 
### 17. Sibling
-Function: binary_tree_t *binary_tree_sibling(binary_tree_t *node);
-Description: Finds the sibling of a node.
 
### 18. Uncle
-Function: binary_tree_t *binary_tree_uncle(binary_tree_t *node);
-Description: Finds the uncle of a node.
