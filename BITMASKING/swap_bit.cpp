#include<iostream>
using namespace std;
void swap_bits(unsigned int num,unsigned int pos1,unsigned  int pos2,unsigned int n){
	unsigned int set1=(num >> pos1) &((1U << n)-1);
	unsigned int set2=(num >> pos2) &((1U << n)-1);
  unsigned int xr=set1 ^set2;
  xr = (xr << pos1)|( xr << pos2) ;
	unsigned int result=num ^ xr;
  cout << result;
	return ;   
}

int main(){
	cout <<"ENTER THE NUMBER "<< endl;
	unsigned int num;
	cin>> num;
	cout << "ENTER THE FIRST POSITION "<< endl;
	unsigned int pos1;
	cin>> pos1;
	cout << "ENTER THE SECOND POSITION "<< endl;
	unsigned int  pos2;
	cin >> pos2;
	cout << "ENTER THE NUMBER OF BITS DO Y WANT TO SWAP "<<endl;
	unsigned int n;
	cin>> n;
	swap_bits(num,pos1,pos2,n);
	return 0;
}
