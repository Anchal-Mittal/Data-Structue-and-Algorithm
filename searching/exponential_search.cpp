#include<iostream>
#include<algorithm>
using namespace std;
int binarySearch(int array[10],int low,int high,int x);
int exponentialSearch(int array[],int size,int x){
	if(array[0]==x)
	   return 1;
	else{
	   	int i=1;
	   	while((i<size )&& (x>array[i])){
	   		i=i*2;
		  }
	return binarySearch(array,i/2,min(i,size),x);   
 }
}

int binarySearch(int array[10],int low,int high,int x){
	while(low<=high){
	int mid=(low+(high-1))/2;
	if(array[mid]==x)
		return mid+1;
	else if(array[mid]>x)
	  high=mid-1;
	else  low=mid+1; 
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
	int pos=exponentialSearch(array,size,x);
	if(pos==-1)
	   cout << "ELEMENT DOES NOT EXIST "<< endl;
	else
		cout << "ELEMENT EXIST AT :" <<pos <<endl;
return 0;		 
}
