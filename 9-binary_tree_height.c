#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - see the height of a binary tree
 * @tree: Root of treet ot measure
 *
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *ptr = tree;
	size_t countl = 0;
	size_t countr = 0;

	if (ptr == NULL)
		return (0);

	if (ptr->left != NULL)
		countl = 1 + binary_tree_height(ptr->left);
	if (ptr->right != NULL)
		countr = 1 + binary_tree_height(ptr->right);
	return (countl > countr ? countl : countr);
}


