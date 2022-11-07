#include<bits/stdc++.h>
using namespace std;
int color[100]={-1};
int vis[100]={0};
class Solution{
    public:
    bool bt(vector<int> adj[], int V){
        queue<int> q;
        
        q.push(0);
        color[0]=1;

        while (!q.empty())
        {
            
            int ind = q.front();
            q.pop();
            vis[ind]=1;

            for(auto it : adj[ind]){
                if(color[it]==color[ind]){
                    return false;
                }
                else{
                    color[it]= 1- color[ind];
                    q.push(it);
                }


            }
            
        }
        return true;
        
    }
};
int main(){
    int V,E;
    cin>>V>>E;
    vector<int> adj[V];
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    memset(color, -1 , sizeof(color));
    Solution ob;
   bool res = ob.bt(adj,V);
   memset(color, -1 , sizeof(color));

    if(res==true){
        cout<<"Bipartite"<<endl;
    }
    else{
        cout<<"not bipartite"<<endl;
    }
}
