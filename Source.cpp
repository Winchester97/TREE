#include "btree.h"

address allocation(infotype X) {
    address N = new elmTree;
    info(N) = X;
    kiri(N) = NULL;
    kanan(N) = NULL;
    return N;
}

void insertBST(address &root, address n) {
    if (root ==  NULL) {
        root = n;
    } else if ( info(root) > info(n) ) {
        insertBST(kiri(root),n);
    } else if (info(root) < info(n)) {
        insertBST(kanan(root),n);
    } else {
        cout<<"Duplicate";
    }
}

void preOrder (address root) {
    if (root != NULL) {
        cout<<info(root)<<" ";
        preOrder (kiri(root));
        preOrder (kanan(root));
    }
}

void inOrder (address root) {
    if (root != NULL) {
        inOrder(kiri(root));
        cout<<info(root)<<" ";
        inOrder(kanan(root));
    }
}

void postOrder (address root) {
    if (root != NULL) {
        inOrder(kiri(root));
        inOrder(kanan(root));
        cout<<info(root)<<" ";
    }
}

address findNode (address root, infotype X) {
    if (root == NULL) {
        return NULL;
    } else {
        if (info(root) > X)
            return findNode (kiri(root),X);
        else if (info(root) < X)
            return findNode (kanan(root),X);
        else
            return root;
    }
}

int countInternalNode(address root) {
    if ((root == NULL) || ((kiri(root) == NULL) && (kanan(root) == NULL))) {
        return 0;
    } return 1+countInternalNode(kiri(root))+countInternalNode(kanan(root));
}

void printLeaves (address root) {
    if (root == NULL) {
        return;
    } if ((kiri(root) == NULL) && (kanan(root) == NULL)) {
        cout<<info(root)<<" ";
        return;
    } if (kiri(root) != NULL) {
        printLeaves(kiri(root));
    } if (kanan(root) != NULL) {
        printLeaves(kanan(root));
    }
}

int countLeaves(address root) {
    if (root == NULL) {
        return 0;
    } else if ((kiri(root) == NULL) && (kanan(root) == NULL)) {
        return 1;
    } else {
        return (countLeaves(kiri(root)) + countLeaves(kanan(root)));
    }
}

void LevelOrder (address root) {
    if (root == NULL) return;
    queue<address>Q;
    Q.push(root);
    while (! Q.empty()) {
        address current = Q.front();
        cout<<current->info<<" ";
        if (kiri(current) != NULL) Q.push(kiri(current));
        if (kanan(current) != NULL) Q.push(kanan(current));
        Q.pop();
    }
}
