#include<iostream>
#include <list>
using namespace std;
class Graph{
  int u,v;
  list<int> *adj;
  public :
  Graph();
  void bfs();
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

void Graph ::bfs(){
    int source;
    cout << "ENTER THE STARTING VERTEX" << endl;
    cin >> source;
    bool *visited= new bool[u];
    for(int i=0;i<u;i++)
    visited[i]=false; // NOW ALL THE EDGES ARE NONVISITED
    list<int> queue;
    visited[source]=true;
    queue.push_back(source);
    list<int> :: iterator i;
    while(!queue.empty()){
        source=queue.front();
        cout<< source << " ";
        queue.pop_front();
        for(i=adj[source].begin();i!=adj[source].end();i++){
            if(!visited[*i]){
                visited[*i]=true;
                queue.push_back(*i);
            }
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
    graph.bfs();
return 0;
}
