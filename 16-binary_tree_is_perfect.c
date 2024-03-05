#include "binary_trees.h"

/**
 * tree_is_perfect - Checks if a tree is perfect.
 * A tree is perfect if it has the same quantity of levels in left as right,
 * and each node has two nodes or none.
 * @tree: Tree to check.
 * Return: 0 if it is not perfect, or the level of height otherwise.
 */
int tree_is_perfect(const binary_tree_t *tree)
{
    int l = 0, r = 0;

    if (tree->left && tree->right)
    {
        l = 1 + tree_is_perfect(tree->left);
        r = 1 + tree_is_perfect(tree->right);
        if (r == l && r != 0 && l != 0)
            return (r);
        return (0);
    }
    else if (!tree->left && !tree->right)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Tree to check.
 * Return: 1 if it is perfect, 0 if not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int result = 0;

    if (tree == NULL)
    {
        return (0);
    }
    else
    {
        result = tree_is_perfect(tree);
        if (result != 0)
        {
            return (1);
        }
        return (0);
    }
}

