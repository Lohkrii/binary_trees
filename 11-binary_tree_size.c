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
