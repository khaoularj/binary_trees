#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree
 * @tree:pointer to the root node of the tree to measure the balance factor
 * Return: 0 If tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return ((binary_tree_height(tree->left) - binary_tree_height(tree->right)));
}

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

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	return (1 + ((left_h > right_h) ? left_h : right_h));
}
