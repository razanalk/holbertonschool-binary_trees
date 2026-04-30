#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to root node
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* احذف اليسار */
	binary_tree_delete(tree->left);

	/* احذف اليمين */
	binary_tree_delete(tree->right);

	/* احذف النود نفسه */
	free(tree);
}
