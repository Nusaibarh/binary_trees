#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - transversal inorder
 * @tree: pointer to tree to print
 * @func: function that prints
 *
 * Return: nothing just prints
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *ptr = tree;

	if (ptr == NULL || func == NULL)
		return;
	if (ptr->left != NULL)
		binary_tree_inorder(ptr->left, func);
	func(ptr->n);
	if (ptr->right != NULL)
		binary_tree_inorder(ptr->right, func);
}
