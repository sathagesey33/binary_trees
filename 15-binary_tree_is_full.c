#include "binary_trees.h"
/**
* binary_tree_is_full - checks if a binary tree is full
* @tree: a pointer to the root node of the tree to check
* Return: 1 if it is full else 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int ans1 = 0, ans2 = 0;

	if (tree)
	{
		ans1 = binary_tree_is_full(tree->left);
		ans2 = binary_tree_is_full(tree->right);
		if (tree->left == tree->right)
			return (1);
	}
	return (ans1 && ans2);
}
