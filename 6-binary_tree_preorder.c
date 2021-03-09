#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes trough a binary tree using pre-order traversal
 * @tree: Pointer to the root node
 * @func: Pointer to a function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
