#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - deletes the entire tree
 * @tree: pointer to the root of node
 *
 * Return: no shit
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *ptr = tree;

	if (ptr != NULL)
	{
		if (ptr->left != NULL)
			binary_tree_delete(ptr->left);
		if (ptr->right != NULL)
			binary_tree_delete(ptr->right);
		free(ptr);
	}
}
