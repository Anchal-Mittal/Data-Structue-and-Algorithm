#include<iostream>
using namespace std;
int add_num(int num1){
   int one=1;
   if(one!=0){
   	num1=num1^one;
   	int carry=num1 & one;
   	one =carry << 1;
   }
   return num1;
}

int main(){
	cout << "ENTER THE FIRST NUMBER "<< endl;
	int first;
	cin>> first;
	int sum=add_num(first);
	cout << "THE SUM OF TWO NUMBERS "<< sum <<endl;
	return 0;
	
}
