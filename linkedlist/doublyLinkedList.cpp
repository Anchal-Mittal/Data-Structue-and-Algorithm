#include<iostream>
using namespace std;
class Node{
	public:
	int info;
	Node *next;
	Node *prev;
	Node(int el,Node *n=0,Node *p=0){
		info=el;
		next=n;
		prev=p;
	 }
};

class List{
	public:
	Node *head;
	Node *tail;
	List(){
		head=NULL;
		tail=NULL;
	}
	void insertAtHead();
	void insertAtTail();
	void insertAtAnyplace();
	void deleteFromTail();
	void deleteFromHead();
	void deleteFromAnyplace();
  void display();
};

void List ::display(){
	Node *temp=head;
	while(temp!=NULL){
		cout << temp->info<< "-> ";
		temp=temp->next;
	}
}
void List::deleteFromAnyplace(){
	  int el;
	  cout << "ENTER THE ELEMENT DO U WANT TO DELETE "<< endl;
	  cin >>el;
	  if(head==NULL)
	  cout << "THE LIST IS EMPTY"<< endl;
	  else if(head==tail){
	  	head=tail=NULL;
	  }
	  else if(head->info==el){
	   head=head->next;
	   head->prev=NULL;
	  }
	  else if(tail->info==el){
	    tail=tail->prev;
	    tail->next=NULL;
	  }

	  else{
	  Node *temp=head;
	  while((temp!=NULL)&&(el!=temp->info)){
		if(el==temp->info){
			temp->prev->next=temp->next;
      return;
		  }
		  temp=temp->next;
  }
	  if(temp==NULL)
	  cout <<"ELEMENT IS NOT EXIST"<< endl;

  }
}
void List :: insertAtTail(){
	int info;
	cout << "ENTER THE ELEMENT DO U WANT TO INSERT "<< endl;
	cin >>info;
	if(head==0)
	tail=head=new Node(info);
	else{
    tail->next=new Node(info,NULL,tail);
	tail=tail->next;
    }

}

void List ::deleteFromHead(){
		if(head==NULL)
		 cout << "OOPS LIST IS ALREADY EMPTY "<< endl;
		else if(head==tail){
			head=tail=NULL;
		}
		else{
	    int el=head->info;
		head=head->next;
		head->prev=NULL;
		cout << "DELETED ELEMENT IS "<< endl;
		cout << el<< endl;
	    }
}

void List::deleteFromTail(){
	 if(tail==NULL)
	   cout << "OOPS LIST IS ALREADY EMPTY "<< endl;
		else if(tail==head){
			head=tail=NULL;
		}
		else{
		    int el=tail->info;
	      tail=tail->prev;
	      tail->next=NULL;
	      cout << "THE DELETED ELEMENT IS "<<el<< endl;
	    }
}

void List::insertAtAnyplace() {
	int info;
	int ele;
	cout << "ENTER THE ELEMENT DO U WANT TO INSERT " << endl;
	cin >> info;
	cout << "ENTER THE  ELEMENT AFTER WHICH DO U WANT TO INSERT "<< endl;
	cin >>ele;
	if(head==NULL){
	  cout <<" CAN INSERT ELEMENT BECAUSE GIVEN LIST IS  EMPTY " <<endl;
	  return ;
	}
	else{
	 Node *temp=head;
	 Node *newNode;
	 while(temp!=NULL){
	 if(ele==temp->info){
	       temp=new Node(info,temp->next,temp->prev);
		  return ;
		  }
	 temp=temp->next;
	   }
	}
  cout << "THE GIVEN ELEMENT IS NOT EXIST SO CAN NOT INSERT "<<  endl;
}

void List :: insertAtHead(){
	int info;
	cout << "ENTER THE ELEMENT DO U WANT TO INSERT "<< endl;
	cin >> info;
	if(tail==NULL){
	head=new Node(info);
	tail=head;
	}
	else if(head==tail){
		head=new Node(info,head,NULL);
		tail=head->next;
	 }
	else{
		head=new Node(info,head,NULL);
	}
}

int main(){
  List object;
	int choice;
	char ch;
	do{
	cout << "MENU"<< endl;
	cout << "1.INSERT ELEMENT AT HEAD"<<endl;
	cout << "2.INSERT ELEMENT AT TAIL"<< endl;
	cout << "3.INSERT AT ANY GIVEN NODE"<< endl;
	cout << "4.DELETE FROM HEAD "<< endl;
	cout << "5.DELETE FROM TAIL"<< endl;
	cout << "6.DELETE FROM ANY GIVEN LOCATION"<< endl;
	cout << "7.DISPLAY THE LIST"<<endl;
	cout << "ENTER UR CHOICE"<< endl;
	cin >> choice;
	switch(choice){
	case 1: object.insertAtHead();
    			object.display();
			    break;
	case 2: object.insertAtTail();
			    object.display();
	     		break;
	case 3: object.insertAtAnyplace();
	  			object.display();
		  		break;
	case 4: object.deleteFromHead();
	  			object.display();
		  		break;
	case 5: object.deleteFromTail();
	  			object.display();
		  		break;
	case 6: object.deleteFromAnyplace();
				  object.display();
				  break;
	case 7: object.display();
				break;
	bydefault: cout << "PLZ ENTER THE CORRECT CHOICE"<< endl;
	}
	cout <<endl<< "IF U WANT TO PERFORM MORE OPERATION THAN PRESS Y"<< endl;
	cin >> ch;
   }while(ch=='y'||ch=='Y');
return 0;
}

