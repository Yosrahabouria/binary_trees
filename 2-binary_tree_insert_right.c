#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts node the right-child of another node.
 *@parent: input value
 *@value: input value
 * Return: pointer to the created node, or NULL on failure or if no.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->i = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (parent->right == NULL)
		parent->right = node;
	else
	{
		node->right = parent->right;
		parent->right = node;
		node->right->parent = node;
	}
	return (node);
}
