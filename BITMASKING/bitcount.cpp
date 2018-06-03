#include<iostream>
using namespace std;
int count;
int countSetBuild(int num){
	 if(num<=0)
	   return 0;
    return((num%2==0 ?0:1)+countSetBuild(num/2));
}

int main(){
	int num;
	cout <<"ENTER THE NUMBER WHOSE BIT DO U WANT TO COUNT"<< endl;
	cin >> num;
	count =countSetBuild(num);
	cout<< "TOTAL NUMBR OF SET BITS ="<< count<< endl;
return 0;	
}
