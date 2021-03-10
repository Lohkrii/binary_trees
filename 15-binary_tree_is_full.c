#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if a binary tree is full
 * @tree: Pointer to the root node
 * Return: If is full 1, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (1);

	if ((tree->left == NULL && tree->right != NULL) ||
			(tree->left != NULL && tree->right == NULL))
		return (0);

	left = 1;
	right = 1;

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (left == 1 && right == 1)
		return (1);
	return (0);
}
