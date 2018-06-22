#include<iostream>
using namespace std;
int add_num(int first,int second){
   if(second!=0){
   	first=first^second;
   	int carry=first & second;
   	second =carry << 1;
   }
   return first;
}

int main(){
	cout << "ENTER THE FIRST NUMBER "<< endl;
	int first;
	cin>> first;
	cout << "ENTER THE SECOND NUMBER "<< endl;
	int second;
	cin>>second;
	int sum=add_num(first,second);
	cout << "THE SUM OF TWO NUMBERS "<< sum <<endl;
	return 0;
	
}
