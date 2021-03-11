#include "binary_trees.h"
#include "11-binary_tree_size.c"

/**
 * help_complete - Helps the complete verification function with
 * recursion of the size.
 * @tree: Pointer to the tree in question.
 * @idx: Starting index depending on depth.
 * @size: is the constantan size of a tree.
 * Return: 1 for complete, else 0.
 */

int help_complete(const binary_tree_t *tree, size_t idx, size_t size)
{
	if (!tree)
		return (1);
	if (idx >= size)
		return (0);
	return (help_complete(tree->left, 2 * idx + 1, size)
			&& help_complete(tree->right, 2 * idx + 2, size));
}

/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 * @tree: Pointer is the tree structure to verify.
 * Return: 1 for complete, otherwise 0.
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);

	size = binary_tree_size(tree);
	return (help_complete(tree, 0, size));
}
