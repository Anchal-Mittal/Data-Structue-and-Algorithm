#include<iostream>
using namespace std;

void reverseArray(int Array[10],int size,int d);

//---------------------------------------rotate the element of the array----------------------------------------------

  void leftRotate(int Array[10],int size , int d){
 	  reverseArray(Array,0,d-1);
 	  reverseArray(Array,d,size);
   	reverseArray(Array,0,size);
  }
  
//---------------------------------------reverse the element of the array--------------------------------------------   

void  reverseArray(int Array[10],int initial,int size){
		  while(initial<size){
	   	  int temp=Array[size];
			  Array[size]=Array[initial];
			  Array[initial]=temp;
			  ++initial;
			  size--;
		 }
}

//-----------------------------------------Print ----------------------------------------------------------------------

void print(int Array[10],int size){
	for(int i=0;i<=size;i++){
		cout << Array[i]<< " ";
	}
	cout <<"\n";
}

//-------------------------------------------------binary search--------------------------------------------------------

void binarySearch(int Array[10],int low,int high, int element){
	int mid;
	while(low <=high){
	    mid=(low+high)/2;
		if(element==Array[mid]){
		   cout << "\nTHE ELEMENT EXIST AT " << mid+1;
		   return ;
		}
	  else if(Array[mid]<element)
	 		 low=mid+1;
	 	else
		  high=mid-1;
 	}
}

//---------------------------------------------------search-------------------------------------------------------------

void search(int Array[10],int size,int element){
	int i=0;
  	while(Array[i]>Array[size]){
   		i++;
		}
	if(element<Array[size])
        	binarySearch(Array,i,size,element);
	else
	        binarySearch(Array,0,i-1,element);
}

//--------------------------------------------------main () function--------------------------------------------------

int main(){
	int size,Array[10],d,element;
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
	
  cout << "ENTER THE ELEMENT DO U WANT TO SEARCH "<< endl;
	cin >> element;
	search(Array,size-1,element);
return 0;
}
