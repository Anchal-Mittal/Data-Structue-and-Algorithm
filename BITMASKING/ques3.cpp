//---------------------------FLIPING ITH BITS-------------------------------------------
#include<iostream>
using namespace std;


//---------------------------------------function that flip the ith bits pg]f a given number-------------------------------

void flipIthBit(int n,int i){
   int mask=1;
   int result;
   
   for(int j=0;j<i;j++)
   		mask=mask<<1;

	result= n^ mask;
	cout << "The Result After Flipping I th bit  " << result;
}

//-----------------------------------------main function------------------------------------------------------------------

int main(){
	int num,i;
	cout <<"ENTER THE NUMBERS "<< endl;
	cin >> num;
	cout << "ENTER THE BIT DO U WANT TO FLIP "<<endl;
	cin >> i;
	flipIthBit(num,i);
}
