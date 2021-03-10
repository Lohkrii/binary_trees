#include "binary_trees.h"

/**
 * tree_weight - Returns the weight.
 * @tree: Pointer to the root of the tree to evaluate.
 * Return: The ammount of weight.
 */

int tree_weight(const binary_tree_t *tree)
{
	int lidx, ridx;

	if (!tree)
	 return (-1);
	lidx = tree_weight(tree->left) + 1;
	ridx = tree_weight(tree->right) + 1;

	if (lidx > ridx)
		return (lidx);
	return (ridx);
}

/**
 * binary_tree_balance - Returns the difference in weight.
 * @tree: Pointer to the root of the tree to evaluate.
 * Return: The ammount of diference in weight or NULL for failure.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int idx, cidx;

	if (!tree)
		return (0);
	idx = tree_weight(tree->left);
	cidx = tree_weight(tree->right);
	return (idx - cidx);
}
