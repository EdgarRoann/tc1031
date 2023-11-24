#include "PlaySort.h"


using namespace std;

TreeNode* PlayerSort::mergeSort(TreeNode* root) {
    if (root == nullptr) {
        return nullptr;
    }
    return mergeSortRecursive(root);
}

TreeNode* PlayerSort::merge(TreeNode* left, TreeNode* right) {
    TreeNode* result = nullptr;

    if (left == nullptr) {
        return right;
    }
    if (right == nullptr) {
        return left;
    }

    if (left->data.nombre <= right->data.nombre) {
        result = left;
        result->right = merge(left->right, right);
    } else {
        result = right;
        result->right = merge(left, right->right);
    }

    return result;
}



void PlayerSort::splitTree(TreeNode* root, TreeNode* &left, TreeNode* &right) {
    if (root == nullptr) {
        left = nullptr;
        right = nullptr;
        return;
    }

    left = root;
    right = root->right;
    root->right = nullptr;
}


TreeNode* PlayerSort::mergeSortRecursive(TreeNode* &root) {
    if (root == nullptr || root->right == nullptr) {
        return root;
    }

    TreeNode* leftSubtree = nullptr;
    TreeNode* rightSubtree = nullptr;
    splitTree(root, leftSubtree, rightSubtree);

    leftSubtree = mergeSortRecursive(leftSubtree);
    rightSubtree = mergeSortRecursive(rightSubtree);

    root = merge(leftSubtree, rightSubtree);
    return mergeSortRecursive(root);
}


