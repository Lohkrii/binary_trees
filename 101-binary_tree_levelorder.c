#include "binary_trees.h"

/**
 * level_order - Executes the function in the node.
 * @tree: Is the tree in use.
 * @idx = Level
 * @func: Function to perform inside the node.
 */

void level_order(const binary_tree_t *tree, size_t idx, void (*func)(int))
{
	if (tree)
	{
		if (idx == 1)
			func(tree->n);
		else if (idx > 1)
		{
			level_order(tree->left, idx - 1, func);
			level_order(tree->right, idx - 1, func);
		}
	}
}

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lidx, ridx;

	if (!tree)
		return (0);
	lidx = binary_tree_height(tree->left);
	ridx = binary_tree_height(tree->right);
	if (lidx >= ridx)
		return (lidx + 1);
	return (ridx + 1);
}

/**
 * binary_tree_levelorder - Executes the function in the given node using
 * level order traversal.
 * @tree: The root of the tree to traverse.
 * @func: Is the function inside the node to execute.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t idx, height;

	if (!tree || !func)
		return;

	height = binary_tree_height(tree);
	for (idx = 0; idx <= height + 1; idx++)
		level_order(tree, idx, func);
}
