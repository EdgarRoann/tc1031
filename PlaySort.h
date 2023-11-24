#ifndef PLAYSORT_H_INCLUDED
#define PLAYSORT_H_INCLUDED

#include "funciones.h"

class PlayerSort {
public:
    static TreeNode* mergeSort(TreeNode* root);
private:
    static TreeNode* merge(TreeNode* left, TreeNode* right);
    static void splitTree(TreeNode* root, TreeNode* &left, TreeNode* &right);
    static TreeNode* mergeSortRecursive(TreeNode* &root);
};

#endif // PLAYSORT_H_INCLUDED
