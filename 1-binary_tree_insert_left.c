#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts node as left-child of another node
 *
 * @parent: is a pointer to node to insert the left-child in
 * @value:  is the value to store in the new node
 *
 * Description - If parent already has left-child, the new node 
 * takes its position,previous left-child set as
 * the left-child of the new node
 *
 * Return: pointer to created node, or NULL on failure or if
 *			parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	/* allocating memory to the new node*/

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	/* inserting the new node to the left*/
	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;
	if (new->left)
		new->left->parent = new;
	return (new);
}
