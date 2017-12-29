#include<iostream>
using namespace std;

void reverseArray(int Array[10],int size,int d);

//------------------------------------------------left roatation of array---------------------------------------------

void leftRotate(int Array[10],int size , int d){
 	reverseArray(Array,0,d-1);
 	reverseArray(Array,d,size);
 	reverseArray(Array,0,size);
}


//------------------------------------------------reverse array--------------------------------------------------------

void  reverseArray(int Array[10],int initial,int size){
		  while(initial<size){
		  int temp=Array[size];
			Array[size]=Array[initial];
			Array[initial]=temp;
			++initial;
			size--;
		}	
}

//-------------------------------------------------print array-------------------------------------------------------

void print(int Array[10],int size){
	for(int i=0;i<=size;i++){
		cout << Array[i]<< " ";
	}
}

//-------------------------------------------------main function-----------------------------------------------------

int main(){
	int size,Array[10],d;
	cout << "ENTER THE SIZE OF THE ARRAY "<<endl;
	cin >> size;
	cout << "ENTER THE ELEMENTS OF THE ARRAY "<< endl;
	for (int i =0;i<size;i++){
		cin >> Array[i];
	}
	cout << "ENTER THE NUMBER HOW MUCH TIME DO U WANT TO ROTATE AN ARRAY "<<endl;
	cin >> d;
	leftRotate(Array,size-1,d);
	print(Array,size-1);
return 0;
}
