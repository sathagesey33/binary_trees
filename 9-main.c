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
    size_t height;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 123);
    root->right = binary_tree_node(root, 602);
    binary_tree_insert_right(root->left, 540);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 178);
    binary_tree_insert_right(root->left, 545);
    binary_tree_insert_right(root, 158);
    binary_tree_insert_right(root->left->left, 4);
    binary_tree_insert_right(root->left->left, 43);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 148);
    binary_tree_insert_right(root->left->left, 34);
    binary_tree_insert_right(root, 18);
    binary_tree_insert_right(root, 12);
    binary_tree_print(root);

    height = binary_tree_height(root);
    printf("Height from %d: %lu\n", root->n, height);
    height = binary_tree_height(root->right);
    printf("Height from %d: %lu\n", root->right->n, height);
    height = binary_tree_height(root->left->right);
    printf("Height from %d: %lu\n", root->left->right->n, height);
    return (0);
}
