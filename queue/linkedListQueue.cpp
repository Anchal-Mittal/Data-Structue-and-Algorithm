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

class Queue{
	public:
	Node *front;
	Node *rare;
	Queue(){
		front=rare=NULL;
	}
void enqueue();
void dequeue();
void display();
};

void Queue ::enqueue(){
	int info;
	cout << "ENTER THE ELEMENTS OF THE ARRAY "<<    endl;
	cin >> info;
	if(front==NULL){
     	front=rare=new Node(info); return;}
	else{
    	rare->next =new Node(info);
	    rare=rare->next;
	    return ;
	}
}

void Queue:: dequeue(){
	if(front==NULL){
	cout << "SORRY!! QUEUE IS ALREADY EMPTY "<< endl;
	return;
   }
	else if(front ==rare){
    	  front=rare=NULL;
    	  return ;
   }
	else{
		Node *temp=front;
		front=front->next;
		delete temp;
		return;
	}
return;
}

void Queue::display(){
	Node *temp=front;
	while(temp!=NULL){
		cout << temp->info <<"-> ";
		temp=temp->next;
	}
}

int main(){
	int choice;
	Queue que;
	char ch;
	do{
    cout <<"!!MENU!!"<< endl;
	cout <<"1.ENQUEUE "<< endl;
	cout <<"2.DEQUEUE "<<endl;
	cout <<"ENTER UR CHOICE "<<endl;
	cin >> choice;
	switch(choice){
		case 1: que.enqueue();
				que.display();
				break;
		case 2: que.dequeue();
				que.display();
				break;
		}
	 cout<<"IF U WANT TO PERFORM MORE OPERATION THEN PRESS Y "<< endl;
	 cin >>ch;
	}while(ch=='y'||ch=='Y');
return 0;
}
