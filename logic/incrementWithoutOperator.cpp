#include<iostream>
using namespace std;

int var =1;

void increment(int num){
   while (var&num){  // work upto rightmost zero	
	    num =num^var;  //convert all 1 to 0
  	  var <<=1;
    }
  num =num ^ var; //convert 0 to 1
	cout <<num<<endl;
}

int main(){
	int num;
	cout <<"ENTER THE NUMBER DO U WANT TO INCREMENT "<< endl;
	cin >>num;
	increment(num);
return 0;
}
