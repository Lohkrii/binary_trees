#include "binary_trees.h"

/**
 * bst_helper - Actually compares to find if tree is bst.
 * @tree: Is the tree to look into.
 * @min: Is the lowest posible int.
 * @max: Is the highest posible int.
 * Return: Returns the minumum value of the tree.
 */

int bst_helper(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);
	return (bst_helper(tree->left, min, tree->n - 1)
			&& bst_helper(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_is_bst - Verifys the given tree is a BST.
 * @tree: Pointer to the root of the tree in question.
 * Return: If bst return 1, otherwise return 0.
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (bst_helper(tree, -2147483647, 2147483647));
}
