#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* newNode(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void freeTree(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    freeTree(root->left);
    freeTree(root->right);
    printf("Free Node: %d\n", root->val);
    free(root);
}

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int maxDepth(struct TreeNode* root) {
    if (root == NULL) return 0;
    int maxDepthLeft = maxDepth(root->left);
    int maxDepthRight = maxDepth(root->right);
    return MAX(maxDepthLeft, maxDepthRight) + 1;
}

int main()
{
    struct TreeNode* root = newNode(3);
    root->left = newNode(9);
    root->right = newNode(20);
    // 9 left & right node is NULL
    // 20 child node
    root->right->left = newNode(15);
    root->right->right = newNode(7);

    int depth = maxDepth(root);
    printf("Maximum Depth: %d\n", depth);

    freeTree(root);
    root = NULL;

	return 0;
}
