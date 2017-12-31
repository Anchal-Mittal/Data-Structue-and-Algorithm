//---------------------------FINDING THE ITH BIT-------------------------------------------

#include<iostream>
using namespace std;


//=================================finding the ith bit of a number======================================================

void findIthBit(int n,int i){
   int mask=1;
   int result;
   
   for(int j=0;j<i;j++)
		mask=mask<<1;
    
	 result= n & mask;
	 if(result)
	     cout << "\nThe ith bit of given number  " << 1;
	else
	   cout << "\nThe ith bit of given number  " << 0;
}

//=======================================main function==================================================================

int main(){
	int num,i;
	cout <<"ENTER THE NUMBERS "<< endl;
	cin >> num;
	cout << "ENTER THE BIT DO U WANT TO FLIP "<<endl;
	cin >> i;
	findIthBit(num,i);
}
