#include<iostream>
using namespace std;

//------------------------------------ COUNT THE NUMBER OF SET BITS--------------------------------------------------------
void findSetBit(int n){
	int count =0;
	while(n!=0){
		n=(n&n-1);
		count++;
	}
	cout << "The Number of set bit is " << count;
}

//------------------------------------------MAIN FUNCTION-----------------------------------------------------------------
int main(){
	int num;
	cout <<"ENTER THE NUMBERS "<< endl;
	cin >> num;
	findSetBit(num);
}
