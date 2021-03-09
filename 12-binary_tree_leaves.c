#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the ammount of leaves in a tree struct.
 * @tree: Pointer to root of tree to evaluate.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	unsigned int idx;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	idx = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (idx);
}
