#include"binary_trees.h"
/**
* binary_tree_sibling - finds the sibling of a node
* @node: a pointer to the node to find the sibling
* Return: a pointer to the sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node)
		return (NULL);
	parent = node->parent;
	if (!parent)
		return (NULL);
	return ((parent->left == node) ? parent->right : parent->left);
}
