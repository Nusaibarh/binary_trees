#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - create a binary tree node
 * @parent: pointer to the parent node to create
 * @value: value to put into new node
 *
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr = NULL;

	ptr = malloc(sizeof(binary_tree_t));
	if (ptr == NULL)
		return (NULL);
	ptr->parent = parent;
	ptr->n = value;
	ptr->left = NULL;
	ptr->right = NULL;

	return (ptr);
}
