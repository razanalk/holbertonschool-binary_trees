#include "binary_trees.h"

/* حساب الارتفاع */
int height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	return ((left > right ? left : right) + 1);
}

/* حساب عدد النودز */
int count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}

/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: root
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h, nodes;

	if (tree == NULL)
		return (0);

	h = height(tree);
	nodes = count_nodes(tree);

	if (nodes == ((1 << h) - 1))
		return (1);

	return (0);
}
