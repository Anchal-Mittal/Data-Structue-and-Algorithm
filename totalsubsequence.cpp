#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int i=0;
	string str="abcabc";
	int acount=0;
	int bcount=0;
	int ccount=0;
	int len=str.size();
	while(i<len){
		if(str[i]=='a'){
		 acount=1+2*acount;
		}
	
    else if(str[i]=='b'){
		 bcount=acount+2*bcount;
		}
		
    else if(str[i]=='c'){
		 ccount=bcount+2*ccount;
		}
		
    i++;
	}
  cout<<"TOTAL NUMBER OF SUBSTRING "<< ccount << endl;
return 0;	
}
