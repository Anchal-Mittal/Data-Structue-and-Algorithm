#include<iostream>
#include<cmath>
using namespace std;

int binaryToDecimal(int el){
	long result;

		int num=el/10;
		int i=0;
		while(el!=0){
			result=result+num*pow(2,i);
			i++;
		}

	return result;
}
int main()
{
 int size;
 int el;
 cout << "ENTER THE NO OF BITS OF BINARY NUMBER" << endl;
 cin >>size;

 long result=binaryToDecimal(el);
 cout <<" THE VALUE IN DECIMAL IS :"<< endl;
 cout << result;




return 0;
}
