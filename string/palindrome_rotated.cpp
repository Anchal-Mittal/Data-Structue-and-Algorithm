#include<iostream>
#include<string>
using namespace std;
bool check_palindrome(string str,int size ){
	for(int i=0;i<=size/2;i++){
		if(str[i]!=str[size-1-i])
		    return 0;
	}
return 1;	
}

string leftrotate(string str,int size){
	char temp=str[0];
	for(int i=0;i<size;i++){
		str[i]=str[i+1];
	}
	str[size-1]=temp;
 return str;	
}

void rotate_palindrome(string str,int size){
	string str2=str;
	for(int i=0;i<size;i++){
		str2=leftrotate(str2,size);
		int x=check_palindrome(str2,size);
		if(x){
      cout << "STRING IS ROTATED PALINDROME "<< endl;
	   return ;
	   }
}

cout << "STRING IS NOT  ROTATED PALINDROME "<< endl;
}
int main(){
	string str;
	cout << "ENTER THE STRING "<<endl;
	getline(cin,str);
	int size=str.size();
	rotate_palindrome(str,size);
return 0;
}
