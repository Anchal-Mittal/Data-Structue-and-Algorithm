#include<iostream>
using namespace std;
int ternarySearch(int array[],int low,int high,int x){
	if(low<=high){
	int mid1=(2*low/3)+(high/3);
	int mid2=(2*high/3)+(low/3);
	if(array[mid1]==x)
	  return mid1+1;
	if(array[mid2]==x)
	  return mid2+1;
	if((array[mid1]<x)&&(array[mid2]>x))
	  ternarySearch(array,mid1+1,mid2-1,x);
  else if((array[mid1]<x))
    ternarySearch(array,mid1+1,high,x);
	else if((array[mid2]>x))
    ternarySearch(array,mid2+1,high,x);
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
	int pos=ternarySearch(array,0,size,x);
	if(pos==-1)
	   cout << "ELEMENT DOES NOT EXIST "<< endl;
	else
		cout << "ELEMENT EXIST AT :" <<pos <<endl;
return 0;		 
}
