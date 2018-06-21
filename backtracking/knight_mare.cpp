#include<iostream>

using namespace std;

#define N 8

int sol_knight(int x,int y,int moviei,int sol[N][N],int xmove[],int ymove[]);

void print(int sol[N][N]){
 for(int i=0;i<N;i++)	{
		for(int j=0;j<N;j++){
			cout <<sol[i][j]<<"   ";
		}
    cout<< endl;
	}
}

bool safe(int x,int y,int sol[N][N]){
	return (x<N && y<N && sol[x][y]==-1 && x>=0 && y>=0);
}

bool knight_mare(){
	int sol[N][N];
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			sol[i][j]=-1;
int xmove[]={ 2, 1, -1, -2, -2, -1,  1,  2};
int ymove[]={1, 2,  2,  1, -1, -2, -2, -1 };
sol[0][0]=0;
if(sol_knight(0,0,1,sol,xmove,ymove)==1){
	cout <<"SOLUTION DOES NOT EXIST "<< endl;
	return false;
  }
print(sol);
return true;
}  

int sol_knight(int x,int y,int moviei,int sol[N][N],int xmove[],int ymove[]){
	if(moviei==N*N)
	 	return 0;
	for(int k=0;k<8;k++){
	  	int xnew=x+xmove[k];
	  	int ynew=y+ymove[k];
	if(safe(xnew,ynew,sol)){
		sol[xnew][ynew]=moviei;
		if(sol_knight(xnew,ynew,moviei+1,sol,xmove,ymove)==0)
	     return 0;
	   else
	  		sol[xnew][ynew]=-1;
	    } 
   }
return 1;  
}

int main(){
 cout << "KINGHT MARE PROBLEM "<< endl;
 knight_mare();
}
