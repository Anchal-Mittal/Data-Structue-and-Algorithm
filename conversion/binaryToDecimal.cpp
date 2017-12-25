#include<iostream>
#include<cmath>
using namespace std;

class Conversion{
  	public:
	int array[10];
 	int size;
 	Conversion();
 	void getNumber();
 	void display();
 	void binaryToDecimal();
};

Conversion :: Conversion(){
  for (int i=0; i< size;i++)
	 array[i]=0;
}

void Conversion ::getNumber(){
	cout << "ENTER THE NUMBER OF BITS IN BINARY"<< endl;
	cin >> size;
	cout<< "ENTER THE BITS  0/1 "<< endl;
	for(int i=0;i<size;i++){
	   cout << "ENTER "<< i<<" bit =" << endl;
	   cin >> array[i];
	}
}

void Conversion ::display(){
	cout <<"THE BINARY NUMBER IS "<< endl;
	for (int i=0;i<size;i++)
	     cout << array[i] << " ";
	cout<<endl;
}

void Conversion :: binaryToDecimal(){
		int result=0,j;
	  	for(int i=size-1,j=0;i>=0;--i,++j){
			result=result+array[i]*pow(2,j);
		  }
                cout << "THE DECIMAL VALUE IS " <<  result;
}

int main(){
 
 Conversion object;
 object.getNumber();
 object.display();
 object.binaryToDecimal();
 return 0;
}
