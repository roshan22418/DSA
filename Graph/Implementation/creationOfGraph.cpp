#include<iostream>
#include <unordered_map>
#include <list>
using namespace std;

// class graph{
//     public:
//         unordered_map<int,list<int>> adjList;
//         void addEdge(int u,int v, int flag){
//             // if flag = 0 -> undirected graph;
//             // if flag = 1 -> directed graph;
//             if(flag == 1){
//                 // u -> v
//                 adjList[u].push_back(v);
//             }
//             else{
//                 // u->v
//                 // v->u
//                 adjList[u].push_back(v);
//                 adjList[v].push_back(u);
//             }
//             print();
//             cout<<endl;
//         }
//         void print(){

//             for(auto i : adjList){
//                 cout<<endl;
//                 cout<<i.first<<"->"<<" {";
//                 for(auto j: i.second){
//                     cout<< j <<",";
//                 }
//                 cout<<" }";
//             }

//         }

            
// };

// int main(){
//     graph gp;
//     gp.addEdge(0,1,0);
//     gp.addEdge(1,2,0);
//     gp.addEdge(1,3,0);
//     gp.addEdge(2,3,0);
//     gp.addEdge(3,4,0);
//     gp.addEdge(4,5,0);
//     gp.addEdge(5,3,0);
//     return 0;

// }




class graph{
    public:
        unordered_map<int,list<pair<int,int>>> adjList;
        void addEdge(int u,int v,int wt,bool direction){
            // if 1 ->directed graph
            if(direction==1){
                adjList[u].push_back({v,wt});
                // adjList[u].push_back(make_pair(v,wt));

            }
            // if 0 -> undirected Graphddfd
            if (direction==0)
            {   
                adjList[u].push_back({v,wt});
                adjList[v].push_back({u,wt});                
            }
            printLinkedlist();
            cout<<endl;
            
        }
        void printLinkedlist(){
            for(auto i: adjList){
                cout<< i.first<<"->{";
                for(pair<int,int> b: i.second){
                    cout<<"{"<<b.first<<",wt "<<b.second<<" }"<<",";
                }
                cout<<"}\n";

            }
        }
};


int main(){
    graph gp;
    gp.addEdge(1,2,10,1);
    gp.addEdge(2,3,34,1);
    gp.addEdge(4,5,23,1);
    gp.addEdge(1,3,34,1);
    return 0;
}