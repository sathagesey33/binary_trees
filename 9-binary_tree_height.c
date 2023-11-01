#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a binary tree
* @tree:  a pointer to the root node of the tree to measure the height.
* Return: (int) hight o the tree node
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height, height1, height2;

	height1 = 1;
	height2 = 1;
	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		if (tree->left)
			height1 += binary_tree_height(tree->left);
		if (tree->right)
			height2 += binary_tree_height(tree->right);
	}
	else
		return (0);
	height = (height1 > height2) ? height1 : height2;
	return (height);
}
