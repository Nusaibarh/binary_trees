#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - ewe
 * @tree: poniter to node
 *
 * Return: ewé melòó
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	const binary_tree_t *ptr = tree;
	size_t leaf = 0;

	if (ptr == NULL)
		return (0);
	if (ptr->left == NULL && ptr->right == NULL)
		return (1);
	if (ptr->left)
		leaf += binary_tree_leaves(ptr->left);
	if (ptr->right)
		leaf += binary_tree_leaves(ptr->right);
	return (leaf);
}
