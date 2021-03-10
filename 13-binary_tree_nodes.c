#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes that have at least 1 child tree.
 * @tree: Pointer to the root of the tree to evaluate.
 * Return: The ammount of nodes with at least 1 child node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	unsigned int idx;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	idx = binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right);
	return (idx);
}
