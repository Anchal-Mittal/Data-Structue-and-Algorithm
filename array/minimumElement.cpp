#include<iostream>
using namespace std;

int main(){

	int size;
	signed int arr[10];
	int min;

	cout <<"Enter the size of the array" <<endl;
	cin  >>size;

	cout << "Enter the elements of the array of the array" <<endl;
	for (int i=0;i< size;i++){
		 cin >> arr[i];
		}

		min=arr[0];

	for (int i=0;i<size;i++){
		if (min > arr[i])
		   min=arr[i];
	    }

	cout << "Minimum element of the array is" << min << endl;

return 0;
}
