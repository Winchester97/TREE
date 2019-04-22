#include "btree.h"
int main()
{
    address root;
    root = NULL;
    insertBST(root,allocation(8));
    insertBST(root,allocation(3));
    insertBST(root,allocation(10));
    insertBST(root,allocation(1));
    insertBST(root,allocation(6));
    insertBST(root,allocation(14));
    insertBST(root,allocation(4));
    insertBST(root,allocation(7));
    insertBST(root,allocation(13));

    cout<<"======================================="<<endl;
    cout<<"INORDER: "; inOrder(root);
    cout<<endl;
    cout<<"=======================================\n";
    cout<<"preOrder yg benar:\t 8 3 1 6 4 7 10 14 13 \n";
    cout<<"PreOrder anda:\t\t ";
    preOrder(root);
    cout<<"\n";
    cout<<"=======================================\n";
    cout<<"PostOrder : ";
    postOrder(root);
    cout<<"\n ====================================\n";
    cout<<"Level Order : ";
    LevelOrder(root);
    cout<<endl;
    cout<<"================FIND NODE============="<<endl;
    if (findNode(root,7) != NULL) {
        cout<<"14 Ada";
    } else {
        cout<<"14 Tidak Ada"; }
    cout<<endl;
    cout<<"=========Count Internal Node=========="<<endl;
    cout<<"Jumlah node internal: ";
    cout<<countInternalNode(root)<<endl;
    cout<<"=============Print Leaves============="<<endl;
    cout<<"Isi Leaves: ";
    printLeaves(root); cout<<endl;
    cout<<"=============Count Leaves============="<<endl;
    cout<<"Jumlah Leaves: "<<countLeaves(root)<<endl;
    if (findNode(root,12) != NULL) {
        cout<<"ada\n";
    }else {
        cout<<"gak ada\n";
    }
    return 0;
}
