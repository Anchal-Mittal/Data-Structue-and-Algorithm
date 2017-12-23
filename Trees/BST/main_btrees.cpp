#include<iostream>
using namespace std;
class Node{
public:
int info;
Node *left;
Node *right;
Node(int el,Node *l=0,Node *r=0){
 	info=el;
	left=l;
	right=r;
 }
};

class BST{
	public:
	Node *root;
	BST(){
		root=NULL;
	}
	void addElement();
	void DeleteElement();
	void searchElement(int key);
	void displayTree();
	
};
