#include<iostream>
#include <list>
using namespace std;
class Graph{
  int u,v;
  list<int> *adj;
  public :
  Graph();
  void dfs();
  void dfStraverse(int u,bool visited[]);
  void addEdge();
};

void Graph ::addEdge(){int n;
    cout << "ENTER THE NO OF EDGES  " << endl;
    cin >> n;
    for(int i=0;i<n;i++){
    cout << "ENTER THE VERTEX u" << endl;
    cin >> u;
    cout << "ENTER THE VERTEX v" << endl;
    cin >>v;
    adj[u].push_back(v);}
}

void Graph ::dfs(){
    cout <<"ENTER THE SOURCE VERTEX " << endl;
    int source;
    cin >> source;
    bool *visited= new bool[u];
    for(int i=0;i<u;i++)
    visited[i]=false; // NOW ALL THE EDGES ARE NONVISITED
    dfStraverse(source,visited);
}

void Graph ::dfStraverse(int u,bool visited[]){
    visited[u]=true;
    cout << u <<" ";
    list<int> ::iterator i;
             for(i=adj[u].begin();i!=adj[u].end();i++){
                   if(!visited[*i]){
                   visited[*i]=true;
                   dfStraverse(*i,visited);
                 }
           }
}

Graph::Graph(){
this->u=u;
adj=new list<int>[u];
}

int main(){
    Graph graph;
    graph.addEdge();
    graph.dfs();
return 0;
}
