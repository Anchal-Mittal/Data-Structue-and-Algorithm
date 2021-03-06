#include<iostream>
#include<queue>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

class Node{
	public:
		Node * right;
		Node *left;
		int data;
		Node(int el, Node *l=0,Node *r=0){
			data =el;
			left=l;
			right=r;
       }
};
 
class Tree{
	public:
	Node *root;
	Tree(){
	root =NULL;
    }  
  int height(Node *root);
  int diameter(Node *root);
  void insert(int el);
  void inorder(Node *root);
  void preorder(Node * root);
  void postorder(Node *root);
  void vertical_order();	
  void getvertical(Node *root,int hd , map <int,vector<int> > &m);
};

int Tree ::diameter(Node *root){
	if(root==NULL)
		return 0;
        int lheight=height(root->left);
	int rheight=height(root->right);
	int ldiameter=diameter(root->left);
	int rdiameter=diameter(root->right);
	return max((lheight+rheight+1),max(ldiameter,rdiameter));
 }


int Tree ::height(Node *root){
	if(root==NULL)
	   return 0;
	else{
        int lheight=height(root->left);
	int rheight=height(root->right);
        if(lheight>rheight)
      		return lheight+1;
        else
        	return rheight+1;
       }  
}

void Tree :: getvertical(Node *root,int hd,map <int,vector<int> > &m){
  if(root==NULL)
     return ;
	m[hd].push_back(root->data);
	getvertical(root->left,hd-1,m);
	getvertical(root->right,hd+1,m);
}

void Tree :: vertical_order(){
	map <int,vector<int> > m;
	int hd=0;
	getvertical(root,hd,m);
	cout << "PRINT IN VERTICAL ORDER "<< endl;
	map <int,vector<int> > ::iterator it;
	for(it=m.begin();it!=m.end();it++){
		for(int i=0;i<it->second.size();i++){
			cout <<it->second[i]<<" ";
		}	
	   cout << endl;
	}
}


void Tree :: insert(int el){
	Node *node=new Node(el);
  if(root == NULL){
     root =node;
     return ;
	}
	else{
		queue <Node *> q;
    q.push(root);
    while(!q.empty()){
       Node *temp = q.front();
       q.pop();
		   if(temp->left==NULL){
		    	temp->left=node;
			    break;
			}
			else
			    q.push(temp->left);	
			
	  	if(temp->right==NULL){
				temp->right=node;
				break;
			}	
		  else
			  q.push(temp->right);
		 }
	}
}

void Tree :: preorder(Node *root){
		if(root==NULL)
		return ;
  	else{
		   cout<<root->data<<"->";
		   preorder(root->left);
	     preorder(root->right);
    	 }
}

void Tree :: postorder(Node *root){
	if(root==NULL)
		return ;
	else{
	       postorder(root->left);
	       postorder(root->right);
	       cout<<root->data<<"->";
	   }
}

void Tree :: inorder(Node *temp){
	if(temp==NULL){
		return ;
	}
	else{
	       inorder(temp->left);
	       cout<<temp->data<<"->";
	       inorder(temp->right);
	   }
}

int main(){
    Tree tree;
    int el;
    char  ch;
    do{
	cout << "ENTER THE ELEMENT DO U WANT TO INSERT " << endl;
	cin >> el;
	tree.insert(el);
        cout <<" IF U WANT TO INSERT MORE ELEMENT PRESS Y" << endl;
        cin >>ch;
	}while(ch=='y'|| ch=='Y');
	cout << "VERTICAL ORDER";
    tree.vertical_order();
    cout << "INORDER  TRAVERSAL " ;
    tree.inorder(tree.root);
    cout << endl;
    cout << "POSTORDER TRAVERSAL ";
    tree .postorder(tree.root);
    cout << endl;
    cout << "PREORDER TRAVERSAL"; 
    tree .preorder(tree.root);
    cout << endl;
    cout << "HEIGHT OF THE TREE ";
    int height= tree.height(tree.root);
    cout <<height;
    cout << "DIAMETER OF THE TREE "<< endl;
    int diameter=tree.diameter(tree.root);
    cout << diameter;
    return 0;
}
