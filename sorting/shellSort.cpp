#include<iostream>
using namespace std;
void shellSort(int array[10],int size){
	for(int gap=size/2;gap>=1;gap=gap/2){

	   for(int j=gap;j<size;j++){
	   	int temp=array[j];
	   	int i;
		   for(i=j;i>=gap&&array[i-gap]>array[j];i=i-gap)
				   array[i]=array[i-gap];
       array[i]=temp;
		   }
	   }
}

int main(){
	int size;
	int array[10];
	cout << "ENTER THE SIZE OF THE ARRAY "<<endl;
	cin >> size;
	cout << "ENTER THE ELEMENTS OF THE ARRAY "<<endl;
	for(int i=0;i<size;i++)
	  cin >>array[i];
	shellSort(array,size);
	cout <<"THE SORTED ARRAY IS "<< endl;
	for(int i=0;i<size;i++)
			cout << array[i]<<" ";
return 0;
}
