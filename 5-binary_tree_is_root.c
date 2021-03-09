#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if the given tree node is the root node.
 * @node: Pointer to the node in question.
 * Return: 1 if root, 0 otherwise.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!(node->parent) || node->parent == node)
		return (1);
	return (0);
}
