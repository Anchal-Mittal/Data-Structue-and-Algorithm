#include<iostream>
using namespace std;

int interpolationSearch(int array[],int size,int x){
	int pos;
	int low=0;
	int high=size-1;
	while((low<high)&&(array[low]<x)&& (x<array[high])){
    pos = low + (((double)(high-low) / (array[high]-array[low]))*(x - array[low]));
	if(array[pos]==x)
	   return pos+1;
	else if(array[pos]>x)
		 high=pos-1;
	else 
	 	 low=pos+1;     
   }
return -1; 	
}

int main(){
	int array[10];
	int size;
	cout << "ENTER THE SIZE OF THE ARRAY "<<endl;
	cin >> size;
	cout << "ENTER THE ELEMENTS OS THE ARRAY "<< endl;
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
	cout << "ENTER THE ELEMENT DO U WANT TO SEARCH"<< endl;
	int x;
	cin>> x;
	int pos=interpolationSearch(array,size,x);
	if(pos==-1)
	   cout << "ELEMENT DOES NOT EXIST "<< endl;
	else
		cout << "ELEMENT EXIST AT :" <<pos <<endl;
return 0;		 
}
