#include "binary_trees.h"

/**
 * binary_tree_size - Returns the size of the tree.
 * @tree: Pointer to the tree node.
 * Return: Returns the size of a tree structure or 0 for everything else.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	unsigned int idx, cidx;

	if (!tree)
		return (0);
	idx = binary_tree_size(tree->left);
	cidx = binary_tree_size(tree->right);
	return (idx + 1 + cidx);
}

/**
 * binary_tree_is_full - Check if a binary tree is full
 * @tree: Pointer to the root node
 * Return: If is full 1, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL && tree->right != NULL) ||
			(tree->left != NULL && tree->right == NULL))
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (left == 1 && right == 1)
		return (1);
	return (0);
}


/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 * @tree: Pointer to the root node
 * Return: On success, return 1, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (1);

	if (binary_tree_is_full(tree) == 1)
	{
		left = binary_tree_size(tree->left);
		right = binary_tree_size(tree->right);

		if (left == right)
			return (1);
	}
	return (0);
}
