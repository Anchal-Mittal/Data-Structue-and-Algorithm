#include<iostream>
using namespace std;
int array[100];
int size=-1;

void push(){
	int element;
	cout << "ENTER THE ELEMENT DO U WANT TO PUSH "<< endl;
	cin >>element;
	array[size+1]=element;
	size++;
}

void pop(){
	if(size!=-1){
      int temp=array[size];
	    size=size-1;
	    cout <<"THE POP ELEMENT IS "<<temp<< endl;
    }
  else
    cout << "THE STACK IS EMPTY!!"<< endl;
}

int main(){
	int choice;
	char ch;
	do{
    cout << ":MENU"<< endl;
	  cout <<"1.PUSH"<< endl;
	  cout << "2.POP"<< endl;
	  cout <<"ENTER UR CHOICE"<< endl;
	  cin >> choice;
	  switch(choice){
		  case 1: push();
				      break;
		  case 2: pop();
				      break;
	  	bydefault : cout << "SORRY WRONG CHOICE"<< endl;
	   }
	  cout << "IF U WANT TO PERFORM MORE OPERATION THAN PRESS Y " ;
	  cin>>ch;
	}while((ch=='y')||(ch=='Y'));
return 0;
}
