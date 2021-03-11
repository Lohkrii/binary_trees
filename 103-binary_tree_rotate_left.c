#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left rotation of a binary tree.
 * @tree: Pointer to the root of the tree to rotate.
 * Return: Returns a pointer to the new rotated tree.
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (!tree)
		return (NULL);
	if (tree->right == NULL)
		return (tree);
	temp = tree->right;
	if ((tree->right)->left != NULL)
	{
		temp->left->parent = tree;
		tree->right = temp->left;
	}
	if (temp->left == NULL)
		tree->right = NULL;
	temp->left = tree;
	tree->parent = temp;
	temp->parent = temp;
	return (temp);
}
