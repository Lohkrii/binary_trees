#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node to the right of a tree.
 * @parent: Is the parent node of the tree structure.
 * @value: the value to be inputted in the new left node.
 * Return: Returns a pointer to the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	else
		new_node->right = NULL;
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	parent->right = new_node;

	return (new_node);
}
