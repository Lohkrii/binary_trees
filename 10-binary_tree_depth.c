#include "binary_trees.h"

/**
 * depth_helper - Function Helper
 * @tree: Pointer to the node
 * @count: count the levels
 * Return: count depth
 */
size_t depth_helper(const binary_tree_t *tree, size_t count)
{
	size_t tmp = 0;

	if (tree == NULL)
		return (count);

	tmp = depth_helper(tree->parent, count + 1);

	return (tmp);
}

/**
 * binary_tree_depth - Measures the depth of a node
 * @tree: Pointer to the node to measure the depth
 * Return: On success, the depth of a node, otherwise 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t result = 0;

	if (tree == NULL)
		return (0);

	result = depth_helper(tree, 0);

	if (result > 0)
		return (result - 1);

	return (result);
}
