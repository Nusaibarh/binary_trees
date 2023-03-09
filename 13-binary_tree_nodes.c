#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - noodu
 * @tree: poniter to node
 *
 * Return: nóòdù melòó
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	const binary_tree_t *ptr = tree;
	size_t node = 0;

	if (ptr == NULL)
		return (0);
	if (ptr->left)
		node +=  binary_tree_nodes(ptr->left);
	if (ptr->right)
		node += binary_tree_nodes(ptr->right);
	if (ptr->left != NULL || ptr->right != NULL)
		node++;

	return (node);
}
