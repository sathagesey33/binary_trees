#include "binary_trees.h"
/**
* binary_tree_size - measures the size of a binary tree
* @tree:  a pointer to the root node of the tree to measure the size
* Return: the size of the tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size, height1, height2;

	if (!tree)
		return (0);
	height1 = binary_tree_size(tree->left);
	height2 = binary_tree_size(tree->right);
	size = height1 + height2;
	return (size + 1);
}
