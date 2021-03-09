#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if node is a leaf type.
 * @node: Pointer to the node in question.
 * Return: 1 if node is a leaf, 0 otherwise.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->left) && !(node->right))
		return (1);
	else
		return (0);
}
