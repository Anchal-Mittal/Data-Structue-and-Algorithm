#include<iostream>
#include"main_btress"
using namespace std;


void BST:: preorderTraverse(){
	Node *node=root;
	perorder(node);
	return;
}


void BST::Preorder(Node *node){
	if(node ==NULL)
	    return ;
	cout << node->info<<"->";
  Preorder(node->left);
	Preorder(node->right);
}
