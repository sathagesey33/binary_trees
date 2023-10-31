#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node to the left child of another node
* @parent: a pointer to the node to insert the left chiild in
* @value: an integer of the node that is been added
* Return: a pointer to the created node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int val)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node)
    {
        new_node->n = val;
        new_node->parent = parent;
        new_node->right = NULL;
        if (parent->left)
        {
            new_node->left = parent->left;
            new_node->left->parent = new_node;
        }
        else
        {
            new_node->left = NULL;
        }
        parent->left = new_node;
    }
    return(parent);
}
