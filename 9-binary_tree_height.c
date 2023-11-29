#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_h = 1 + binary_tree_height(tree->left);
	else
		left_h = 0;
	if (tree->right != NULL)
		right_h = 1 + binary_tree_height(tree->right);
	else
		right_h = 0;
	return ((left_h > right_h) ? left_h : right_h);
}
