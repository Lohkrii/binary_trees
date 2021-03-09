#include "binary_trees.h"

/**
 * binary_tree_node - Creates a Binary tree node.
 * @parent: Pointer to the root node.
 * @value: Value to be injected to root node.
 * Return: Returns a pointer to the root node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	root = malloc(sizeof(binary_tree_t));
	if (root == NULL)
		return NULL;

	root->n = value;
	root->parent = parent;
	root->left = NULL;
	root->right = NULL;
	return (root);
}
