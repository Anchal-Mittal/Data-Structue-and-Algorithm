#include<iostream>
#include"main_btrees"
void BST ::addElement(){
	int el;
	cout << "ENTER THE ELEMENT DO U WANT TO INSERT "<< endl;
	cin>>el;
	if(root==NULL)
	root=new Node(el);
	Node *temp=root;
	Node *prev=temp;
	while(temp!=NULL){
		 if(temp->info>el){
			prev =temp;
			temp=temp->left;
		}
		else if(temp->info<el){
			prev=temp;
			temp=temp->right;
		}
	}
	if(prev->info>=el)
	  prev->left=new Node(el);

   else
	  prev->right=new Node(el);
return ;
 
}
