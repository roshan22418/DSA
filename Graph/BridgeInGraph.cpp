#include <iostream>
#include<vector>
#include<unordered_map>
#include<list>

using namespace std;

class Graph{
    public:
        unordered_map<int,list<int>> un;
        void addEdge(int n, int v,bool direction){
            if(direction==1){
                un[n].push_back(v);
            }
            else
            {
                un[n].push_back(v);
                un[v].push_back(n);
            }
            
        }
        void dfs(int node,unordered_map<int,list<int>> adj,vector<int> &ans,int visted[]){
            visted[node] = 1;
            ans.push_back(node);
            for(auto it : adj[node]){
                if (!visted[it])
                {
                    dfs(it,adj,ans,visted);   
                }
                
            }
        }

        void Dfs(int V){
            vector<int> ans;
            int visted[V] = {0};
            int start = 0;
            dfs(start,un,ans,visted);

        }     


};

int main(){
    int V = 3;
    int visted[V];
    
}