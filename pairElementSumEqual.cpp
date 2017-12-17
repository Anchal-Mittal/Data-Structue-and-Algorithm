#include<iostream>
using namespace std;
int array[10];
int size;

// SORT THE GIVEN ARRAY
void bubbleSort(){
    int temp;
	for(int i=0;i<size/2;i++){
		for( int j=0;j<size;j++)
		{   if(array[j]>array[j+1]){
			   temp=array[j];
			   array[j]=array[j+1];
			   array[j+1]=temp;
		    }
    }
	}
}

int main(){
	int size,array[10],element;
	cout << "ENTER THE SIZE OF THE ARRRAY"<< endl;
	cin  >>size;
	cout << "ENTER THE ELEMENT OF THE ARRAY "<< endl;
	for(int i=0;i<size;i++)
		cin>> array[i];
		bubbleSort();
  cout << "THE SORTED ARRAY IS "<< endl;
	for(int i=0;i<size;i++)
	  cout << array[i]<<" ";
	cout <<endl<<"ENTER THE ELEMENT "<< endl;
	cin >>element;
	for(int j=0;j<size/2;j++){
		 for(int i=1;i<size;i++){
      		if((array[j]+array[i])==element){
              cout << array[i]<< " "<<array[j];
          }
	  	}
 }
return 0;
}
