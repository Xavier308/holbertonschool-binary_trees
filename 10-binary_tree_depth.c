#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to node
 * Return: 0 if tree is NULL, depth of a node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t Ldepth, Rdepth;
if (tree == NULL)
return (0);
Ldepth = binary_tree_depth(tree->left);
Rdepth = binary_tree_depth(tree->right);
return ((Ldepth > Rdepth ? Ldepth : Rdepth) +1);
}
