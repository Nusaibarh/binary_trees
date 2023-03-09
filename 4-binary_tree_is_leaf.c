#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check leaf
 * @node: node to check
 *
 * Return: 1 if leaf and 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->left == NULL && node->right == NULL)
			return (1);
	}
	return (0);
}
