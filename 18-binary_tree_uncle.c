#include "binary_trees.h"

/**
 * *binary_tree_uncle - find the uncle of a node
 * @node: Pointer to the node to find the uncle
 * Return: On success, Pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *ppnode;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	ppnode = node->parent->parent;

	if (ppnode->left == NULL || ppnode->right == NULL)
		return (NULL);

	if (ppnode->left == node->parent)
		return (ppnode->right);
	return (ppnode->left);
}
