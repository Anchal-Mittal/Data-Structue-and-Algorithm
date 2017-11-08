#include<iostream>

using namespace std;
class Node{
	public :
		int info;
		Node *next;
		Node(int el, Node * n=0){
			info=el;
			next=n;
		}
	};

class list{
	public :
Node *head;
Node *tail;
List(){
	head=0;
	tail=0'';
	}
void insertAtHead(int el);
void deleteFromHead(int el);
void dispaly();	
};

void List:insertAtHead(Node *n,int el){
	if(head==0){
		head=tail=n;
	}
	else if(head==tail){
		tail->next=n;
		tail=tail->next;
	
	}
}

void List:deleteFromHead(){
	if(head==0){
		cout << "THE LIST IS ALREADY EMPTY" <<endl;
	}
	else if(head==tail){
		head= tail=NULL;
	}
	else{
		int temp=head->info;
		head=head->next;
		delete temp;
	}
	
}

void List:deleteFromtail(){
	if(head==NULL){
		cout <<"LIST IS ALREADY EMPTY" << endl;
	}
	else if(head==tail){
		head=tail=NULL;
	}
	else{
	Node *temp=head;
	while(temp!=tail->next){
	tail=temp;
	tail->next=null;
     }
	}
}
void List:display(){
   Node * temp = head;
   int el; 
   while(temp!=NULL){
   	el=temp->info;
   	cout << el <<" " ;
   }
   cout << endl;
}

int main(){
int choice;
int info;
char ch;
do{
cout << "ENTER YOUR CHOICE" << endl;
cout <<" 1.WANT TO INSERT AN ELEMENT AT HAED "<< endl;
cout << "2.WANT TO DELETE AN ELEMENT FROM HAED" << endl;
cout << "3 WANT TO DELETE AN ELEMENT FROM TAIL"<< endl;
cout << "4.WANT TO ADD AN ELEMENT AT TAIL " << endl;
cout << "5.WANT TO DISPALY THE LIST "<< endl;
cout << "IF YOU WANT APPLY MORE OPERATIONS THAN PRESS Y ELSE N" << endl;
cin>>ch; 
while(ch=='Y'||ch=='y');
cin >> choice;
switch(choice){
	case 1 : cout << "ENTER THE ELEMENT DO U WNAT TO INSERT " << endl;
	         cin >> info;
			 insertAtHead(info); 
			 break;
	case 2: deleteFromHead();
	         break;
	case 3: deleteFromTail()';
	          break;'		 		 	
	case 4: cout << "ENTER THE ELEMENT DO U WANT TO INSERT "<< endl'
	'       cin>> info;
	        insertAtTail(info);
             break;
    case 5: dispaly();
             break;   
}
return 0;
}
