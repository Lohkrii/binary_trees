#include "binary_trees.h"

/**
 * height_helper - Function helper
 * @tree: Pointer to the root node
 * @count: count the levels
 * Return: count height
 */
size_t height_helper(const binary_tree_t *tree, size_t count)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (count);

	left = height_helper(tree->left, count + 1);
	right = height_helper(tree->right, count + 1);

	if (left >= right)
		return (left);
	else
		return (right);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node
 * Return: On succes, the height of the tree, otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t result = 0;

	if (tree == NULL)
		return (0);

	result = height_helper(tree, 0);

	if (result > 0)
		return (result - 1);

	return (result);
}
