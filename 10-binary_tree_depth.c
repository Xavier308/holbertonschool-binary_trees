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
if (tree == NULL)
{
return (0);
}
else
{
	int Ldepth = binary_tree_depth(tree->left);
	int Rdepth = binary_tree_depth(tree->right);
	if (Ldepth > Rdepth)
		return (Ldepth + 1);
	else
		return (Rdepth + 1);
}
}
