#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    root->left->left = binary_tree_node(root->left, 121);
    root->left->right = binary_tree_node(root->left, 122);
    root->right->left = binary_tree_node(root->right, 123);
    root->right->right = binary_tree_node(root->right, 124);
    binary_tree_insert_left(root->right, 128);
    binary_tree_insert_left(root, 54);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);
    binary_tree_delete(root);
    return (0);
}
