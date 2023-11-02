#include "binary_trees.h"
/**
* binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
* @tree: a pointer to the root node of the tree to count the number of nodes
* Return: number of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		count += binary_tree_nodes(tree->left);
		count += binary_tree_nodes(tree->right);
		if (tree->left ||  tree->right)
			return (count + 1);
	}
	return (count);
}
