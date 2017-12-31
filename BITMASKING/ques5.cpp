//-----------------------------------------CLEAR ITH BITS----------------------------------------------------------------

#include<iostream>
using namespace std;

//===============================================CLEAR THE ITH BIT OF A NUMBER===========================================

void clearIthBit(int n,int i){
   int mask=1;
   int result;
   
   for(int j=0;j<i;j++)
  		mask=mask<<1;

	result= n & ~(mask);
	cout << "\nAFTER CLEAREING THE iTH BIT " << result;
}

//==========================================================MAIN FUNCTION================================================

int main(){
	int num,i;
	cout <<"ENTER THE NUMBERS "<< endl;
	cin >> num;
	cout << "ENTER THE BIT DO U WANT TO FLIP "<<endl;
	cin >> i;
	clearIthBit(num,i);
}
