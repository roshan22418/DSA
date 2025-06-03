#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>


using namespace std;

template<typename T> 
class graph{
     public:
        unordered_map<T,list<pair<T,int>>> adjList;
        void adjLinkedlist(T a, T b,int wt,bool direction){
            if(direction==0){
                // undirected Graph;
                adjList[a].push_back({b,wt});
                adjList[b].push_back({a,wt});

            }
            else
            {
                adjList[a].push_back({b,wt});
            }
            
        }
        void traversalUsingBFS(T node,unordered_map<T,bool> &visited){
            queue<T> q;

      //initial state
            q.push(node);
            visited[node] =true;

            while(!q.empty()) {
              T frontNode = q.front();
              cout << frontNode << " ";
              q.pop();

              for(auto nbr: adjList[frontNode]) {
                T nbrData = nbr.first;

                if(!visited[nbrData]) {
                  q.push(nbrData);
                  visited[nbrData] = true;
                }
              }
            }
    
        }

};

int main(){
    graph<char>  gp;
    gp.adjLinkedlist('a','b',0,0);
    gp.adjLinkedlist('a','c',0,0);
    gp.adjLinkedlist('b','c',0,0);
    gp.adjLinkedlist('b','d',0,0);
    gp.adjLinkedlist('c','e',0,0);
    gp.adjLinkedlist('c','f',0,0);
    gp.adjLinkedlist('e','f',0,0);

    unordered_map<char,bool> visted;
    for (char node = 'a'; node <='f'; node++)
    {
        if (!visted[node])
        {
            gp.traversalUsingBFS(node,visted);
        }
        
    }
    
    return 0;

}
