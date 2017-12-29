#include<iostream>

using namespace std;
int main(){
	cout << "ENTER THE SIZE OF THE ARRAY "<< endl;
	int size;
	cin >> size;
	int arr[10];
	cout << "ENTER THE ELEMENTS OF THE ARRAY " << endl;
	for (int i =0; i <size; i++) {
		cin >> arr[i];
	}
	int temp;
	int sizee =size-1;
	for (int i=0; i<=size/2 ;i++) {
		temp=arr[i];
		arr[i]=arr[sizee-i];
		arr[sizee-i]=temp;
		
	
	}
	cout << "The Rotated array is " << endl;
	for(int i=0;i< size;i++) {
		cout << arr[i] << " ";
	} 	
return 0;
}
