#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert to the left of the tree
 * @parent: parent node
 * @value: value to insert
 *
 * Return: pointer to the creted node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr = NULL;

	ptr = malloc(sizeof(binary_tree_t));
	if (ptr == NULL)
		return (NULL);
	ptr->parent = parent;
	ptr->n = value;
	ptr->left = NULL;
	ptr->right = NULL;

	if (parent == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (parent->left == NULL)
		parent->left = ptr;
	else
	{
		parent->left->parent = ptr;
		ptr->left = parent->left;
		parent->left = ptr;
	}

	return (ptr);
}
