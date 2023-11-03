#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 *
 * @parent: - pointe to the parent node of the node to create
 * @value: - value to put in new node
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*new node with its data type */
	binary_tree_t *newNode;

	/* allocate memory space for new node */
	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	/* assign values to propertnies of the new node */
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	/* return a pointer to node */
	return (newNode);
}
