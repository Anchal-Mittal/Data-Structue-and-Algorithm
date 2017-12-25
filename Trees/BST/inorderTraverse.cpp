#include<iostream>
#include"main_btress"
using namespace std;

void BST::inorder(Node *node){
	if(node ==NULL)
	    return ;
	inorder(node->left);
	cout << node->info<<"->";
	inorder(node->right);
}
