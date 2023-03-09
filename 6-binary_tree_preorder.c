#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - transversal in preorder
 * @tree: pointer to the node of tree
 * @func: pointer to print functio
 *
 * Return: nothing just print
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *ptr = tree;

	if (ptr == NULL || func == NULL)
		return;
	if (ptr != NULL)
		func(ptr->n);
	if (ptr->left != NULL)
		binary_tree_preorder(ptr->left, func);
	if (ptr->right != NULL)
		binary_tree_preorder(ptr->right, func);
}
