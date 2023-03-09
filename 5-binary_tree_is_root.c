#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - check root
 * @node: node to check
 *
 * Return: 0 if node is null or !root else 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);

	return (0);
}
