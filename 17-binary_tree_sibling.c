#include "binary_trees.h"

/**
 * *binary_tree_sibling - Find the sibling of a node
 * @node: Pointer to the node to find the sibling
 * Return: On success, a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
