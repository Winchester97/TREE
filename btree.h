#ifndef BTREE_H_INCLUDED
#define BTREE_H_INCLUDED

#define info(N) N->info
#define kiri(N) N->kiri
#define kanan(N) N->kanan
#include <cstddef>
#include <iostream>
#include <queue>

using namespace std;

typedef int infotype;
typedef struct elmTree *address;
struct elmTree {
    infotype info;
    address kiri;
    address kanan;
};

address allocation(infotype X);
int countLeaves(address root);
void printLeaves (address root);
int countInternalNode(address root);
address findNode (address root, infotype X);
void inOrder (address root);
void insertBST(address &root, address n);
void preOrder (address root);
void postOrder (address root);
void inOrder (address root);
void LevelOrder (address root);



#endif // BTREE_H_INCLUDED
