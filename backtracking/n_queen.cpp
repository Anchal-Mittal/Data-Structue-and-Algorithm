#include<iostream>
using namespace std;
# define n 8

void print(int sol[n][n] ){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout <<sol[i][j]<<" ";
		}
	 cout << endl;	
	}
}

bool is_safe(int row,int col,int sol[n][n]){
	for(int i=row;i<col;i++){
		if(sol[row][i]==1)
		 return false;
		}
	for(int i=row,j=col;i>=0&&j>=0;--i,--j){
	    if(sol[i][j]==1)
	    return false;
	    
	}
		for(int i=row,j=col;i<n&&j>=0;++i,--j){
	    if(sol[i][j]==1)
	    return false;
	    }
return true;	
}

int placed_queen(int sol[n][n],int col){
	if(col>=n)
	  return 0;
	for(int i=0;i<n;i++){
	    	if(is_safe(i,col,sol)){
				sol[i][col]=1;
				if(placed_queen(sol,col+1)==0)
		   			return 0;
		   		else
				   sol[i][col]=0;
 			}
 		}	
return 1;
}

bool n_queen(){
	int sol[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			sol[i][j]=0;
		}
	}
	if(placed_queen(sol,0)==1){
		cout << "queen can not placed "<< endl;
		return false;
	}
print(sol);
return true;	
}

int main(){
	cout << "n queen problem "<< endl;
	n_queen();
return 0;
}
