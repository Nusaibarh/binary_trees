#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - counts data stored from a node as size
 * @tree: pointer to node
 *
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	const binary_tree_t *ptr = tree;
	size_t size = 1;

	if (ptr == NULL)
		return (0);

	if (ptr->left)
		size += binary_tree_size(ptr->left);
	if (ptr->right)
		size += binary_tree_size(ptr->right);
	return (size);
}
