#include<iostream>
using namespace std;
void all_zero(int *arr){
	arr[arr[1]]=arr[arr[0]];
}
int main(){
   int arr[]={1,0};
   all_zero(arr);
   cout << arr[0]<< " "<< arr[1]<< endl;
   return 0;
}
