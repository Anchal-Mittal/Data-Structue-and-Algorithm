#include<iostream>
using namespace std;
 class Node{
	public:
	int info;
	Node *next;
	Node(int el,Node *n=0){
		 info=el;
	  	next=n;
	 }
};

class List{
	public:
  Node *head;
	List(){
        head=NULL;
	}
	void push();
  void pop();
  void display();
};

void List ::display(){
Node *temp=head;
	while(temp!=NULL){
		cout << temp->info<< "-> ";
		temp=temp->next;
	}
}

  void List :: push(){
	int info;
	cout << "ENTER THE ELEMENT DO U WANT TO INSERT "<< endl;
	cin >> info;
	if(head==NULL){
	head=new Node(info);
 	}
 	else
	head=new Node(info,head);
}


void List::pop(){
   if(head==NULL){
   		  cout << "OOPS LIST IS ALREADY EMPTY "<< endl;
   		  return ;}
  	else{
	    int el=head->info;
		  head=head->next;
		  cout << "DELETED ELEMENT IS "<< endl;
		  cout << el<< endl;
		  return ;
	    }
}

int main(){
  List object;
	int choice;
	char ch;
	do{
	cout << "MENU"<< endl;
	cout << "1.PUSH"<<endl;
	cout << "2.POP"<< endl;
	cout << "3.DISPLAY THE LIST"<<endl;
	cout << "ENTER UR CHOICE"<< endl;
	cin >> choice;

    switch(choice){
   	case 1: object.push();
    			  object.display();
			      break;

    case 2: object.pop();
			      object.display();
		    	  break;

    case 3: object.display();
			    	break;
    bydefault: cout << "PLZ ENTER THE CORRECT CHOICE"<< endl;
  	}
	cout <<endl<< "IF U WANT TO PERFORM MORE OPERATION THAN PRESS Y"<< endl;
	cin >> ch;
   }while(ch=='y'||ch=='Y');
return 0;
}
