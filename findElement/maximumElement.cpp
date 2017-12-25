#include<iostream>
using namespace std;

int main(){
	
	int size;
	int arr[10];
	int max;

	cout <<"Enter the size of the array" <<endl;
	cin  >>size;
	
	cout << "Enter the elements of the array of the array" <<endl;
	for (int i=0;i< size;i++){
		 cin >> arr[i];
		}

		max=arr[0];

	for (int i=0;i<size;i++){
		if (max < arr[i])
		   max=arr[i];
	    }
	    
	cout << "Maximum element of the array is" << max << endl;

return 0;
}
