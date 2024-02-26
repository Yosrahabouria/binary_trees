#ifndef BINARY_TREES_H
#define BINARY_TREES_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * struct binary_tree_b - Binary tree node
 *
 * @i: input value
 * @parent: input value
 * @left: input value
 * @right: input value
 */
struct binary_tree_b
{
    int i;
    struct binary_tree_b *parent;
    struct binary_tree_b *left;
    struct binary_tree_b *right;
};

typedef struct binary_tree_b binary_tree_t;
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
#endif
