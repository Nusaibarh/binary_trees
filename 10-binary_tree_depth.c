#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - find the depth. posotion to root
 * @tree: the position of the node
 *
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *ptr = tree;
	size_t count = 0;

	if (ptr == 0)
		return (0);
	while (ptr != NULL)
	{
		ptr = ptr->parent;
		count++;
	}
	return (count - 1);
}
