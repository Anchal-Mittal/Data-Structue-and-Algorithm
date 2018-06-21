#include<iostream>
using namespace std;

#define N 4

int is_safe(int maze[N][N],int x,int y,int sol[N][N]){
	return(x>=0 && y>=0 && sol[x][y]==0 && maze[x][y]==1 && x<N&& y<N);
}
void print(int maze[N][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout << maze[i][j]<< " ";
		}
    cout <<endl;
	} 
return ;	
}
int find_path(int maze[N][N],int x,int y,int sol[N][N]){
	if((x==N-1)&&(y==N-1)){
		sol[x][y]=1;
		return 0;
	}
	if(is_safe(maze,x,y,sol)){
	     sol[x][y]=1;
		if(find_path(maze,x+1,y,sol)==0)
	    	 return 0;
		if(find_path(maze,x,y+1,sol)==0)
	    	 return 0;
    	sol[x][y]=0;
		return 1;
   }
return 1;	
}
int maze_rat(int maze[N][N]){
int sol[N][N];
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			sol[i][j]=0;
		}
	} 
	if(find_path(maze,0,0,sol)==1){
		cout <<"PATH DOES NOT EXISTS "<< endl;
		return 1;
	}
print(sol);	
return 0;	
}
int main(){
	cout << "Maze And Rat "<< endl;
	cout << "Enter the Path"<< endl;
	int maze[N][N];
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cin>>maze[i][j];
		}
	} 
	maze_rat(maze);
return 0;	
}
