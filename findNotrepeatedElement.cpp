#include<iostream>
using namespace std;

// SWAP FUNCTION
void swap(int &num1 ,int &num2){
	int temp=num1;
	num1=num2;
	num2=temp;
}

// APPLYING BUBBLE SORT TO SORT THE ELEMENT
void sort(int array[10],int size){
	for(int i=0;i<size/2;i++){
		for(int j=0;j<size;j++){
			if(array[j]>array[j+1]){
				swap(array[j],array[j+1]);
			}
		}
	}
}

int main(){
    int size,array[10];
  	cout<<"ENTER THE SIZE OF THE ARRAY "<< endl;
  	cin>>size;
  	cout <<"ENTER THE SIZE OF THE ARRAY"<< endl;
  	for (int i=0;i<size ;++i){
  		cin >> array[i];
	  }
    
    sort(array,size);
    for(int i=0;i<size;i++){
		if(array[i]!=array[i+1])
		  cout <<"ELEMENT "<< array[i]<< "is not repeated"<< endl;
		else
		  i++;
	}

return 0;
}
