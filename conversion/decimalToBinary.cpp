#include<iostream>
using namespace std;

class Conversion{
	public:
	int size;
	int number;
	Conversion();
	int bitsBinaryArray[10];
	void getNumber();
	void display();
	void decimalToBinary();
};

Conversion :: Conversion(){
	number=0;
	for(int i=0;i<10;i++)
	   bitsBinaryArray[i]=0;
	size=0;

}

void Conversion ::getNumber(){
	cout <<"ENTER THE NUMBER DO U WANT TO CONVERT "<< endl;
	cin>>number;
}


void Conversion ::decimalToBinary(){
	int element=number;
	while(element!=0){
		element=element/2;
		size++;
	}
	element=number;
	int num=element/2;
  	int i=size-1;
	bitsBinaryArray[i]=element%2;
	while(num!=0){
		  i--;
		  bitsBinaryArray[i]=num%2;
  		  num=num/2;
	}
	
	
}
void Conversion ::display(){
	cout<<"THE BINARY REPRESENTATION OF THE GIVEN NUMBER IS "<< endl;
	for(int i=0;i< size;i++){
		cout <<bitsBinaryArray[i];
	}
}
int main()
{
	Conversion object;
	object.getNumber();

	object.decimalToBinary();
	object.display();
	return 0;
}
