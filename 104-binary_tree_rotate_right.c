#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right rotation of a binary tree.
 * @tree: Pointer to the root of the tree to rotate.
 * Return: Returns a pointer to the new rotated tree.
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (!tree)
		return (NULL);
	if (tree->left == NULL)
		return (tree);
	temp = tree->left;
	if ((tree->left)->right != NULL)
	{
		temp->right->parent = tree;
		tree->left = temp->right;
	}
	if (temp->right == NULL)
		tree->left = NULL;
	temp->right = tree;
	tree->parent = temp;
	temp->parent = temp;
	return (temp);
}
