#include<iostream>

using namespace std;
int main(){
	cout << "ENTER THE SIZE OF THE ARRAY "<< endl;
	int size;
	cin >> size;
	int arr[10];
	cout << "ENTER TEH SIZE OF THE ARRAY " << endl;
	for (int i =0; i < size; i++) {
		cin >> arr[i];
	}
	cout << "ENTER THE NUMBER UPTO DO U WANT  TO ROTATE THE ARRAY " << endl;
	int rotateTime;
	cin >> rotateTime;
	int temp;
	for (int i=0; i < rotateTime ;i++) {
		int j=0;
		temp=arr[j];
		for (int j=0 ;j<size-1;j++){
		arr[j]=arr[j+1];
		}
	arr[j]=temp;
	}
	cout << "The Rotated array is " << endl;
	for(int i=0;i< size;i++) {
		cout << arr[i] << " ";
	} 	
return 0;
}
