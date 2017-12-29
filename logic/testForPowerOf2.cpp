#include<iostream>
using namespace std;
int main (){
	int num;
	cout <<"ENTER THE NUMBER "<< endl;
	cin >> num;
	while(num!=1)
	{
     if(num %2!=0){
         cout <<"THE GIVEN NUMBER IS NOT A POWER OF TWO "<< endl;
		 return -1;
	    }
     else
		  num=num/2;
	}
	cout <<"THE GIVEN NUMBER IS A POWER OF 2"<< endl;
return 0;
}
