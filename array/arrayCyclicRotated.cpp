#include<iostream>
using namespace std;

int main(){
	int size,array[10],temp;
	char ch;
	cout <<"ENTER THE SIZE OF THE ARRAY "<< endl;
	cin>>size;
	cout << "ENTER THE ELEMENTS OF THE ARRAY "<< endl;
	for ( int i=0;i<size; i++)
 		cin>>array[i];
 	
  do{
		temp=array[0];
		for(int i=0;i<size-1;i++)
			array[i]=array[i+1];
		array[size-1]=temp;
		cout << "IF U WANT TO ROTATE ONCE MORE THAN PRESS Y"<< endl;
		cin >> ch;
    }while((ch=='Y')||(ch=='y'));
		
    cout<< "THE ROTATED ARRAY IS "<< endl;
		 for (int i=0;i<size;i++)
		   cout << array[i]<< " ";
return 0;
	
}
