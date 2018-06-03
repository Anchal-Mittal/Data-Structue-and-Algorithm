#include<iostream>
using namespace std;
int main(){
	int num,count=0;
	cout <<"ENTER THE NUMBER WHOSE BIT DO U WANT TO COUNT"<< endl;
	cin >> num;

  for(int i=1;i<=num;i++){
		int temp=i;
		while(temp!=0){
			temp=(temp&temp-1);
			count++;
		}
	}
	
cout<< "TOTAL NUMBR OF SET BITS ="<< count<< endl;
return 0;	
}
