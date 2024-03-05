#include "binary_trees.h"

/**
 * binary_tree_insert_right - Adds a node to the right of the parent.
 * If it exists, it moves down one level and adds the new node first.
 * @parent: Parent of the specified node.
 * @value: Value of the node.
 * Return: NULL if it fails or the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
    {
        return (NULL);
    }

    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
    {
        return (NULL);
    }
    if (parent->right != NULL)
    {
        new_node->right = parent->right;
        parent->right->parent = new_node;
    }
    parent->right = new_node;
    return (new_node);
}

