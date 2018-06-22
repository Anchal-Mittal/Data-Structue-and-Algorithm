#include<iostream>
using namespace std;
int find_once(int array[10],int size){
	int x=1;
	int result=0;
	for(int i=0;i<32;i++){
		x=(1<< i);
	    int sum=0;
		for(int j=0;j<size;j++){
			if(array[j]&x)
			  sum++;
		}
		if(sum%3!=0)
		result=result|x;
	}
	return result;
}

int main(){
	int array[10];
	cout << "ENTER THE SIZE OF THE ARRAY "<< endl;
	int size;
	cin >> size;
	cout << "ENTER THE ELEMENT OF THE ARRAY "<< endl;
	for(int  i=0;i<size;i++){
		cin>>array[i];
	}
	int x=find_once(array,size);
	cout << "THE ELEMEENT WHICH IS REPEATED ONLY ONCE IS "<<x<< endl;
	return 0;
}
