#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    bool solve(int V, vector<int> adj[])
    {
         for(int i=0; i< V;i++){
            vector<bool> dp(V, true);
            queue<int> que;
            que.push(i);

            while(!que.empty()){
                int current = que.front();
                que.pop();
    
                dp[current]=false;

                for(auto val : adj[current]){
                   
                    if(dp[val] == true){
                        que.push(val);
                    }
                    
                }

            }
         }
         return false;
    }

};
int main(){
    
    int E,V,u,v;
    while(cin>>V>>E){
    vector<int> adj[V];
    for(int i=0;i<V;i++){
        adj[i].clear();
    }
    for(int i=0;i<E;i++){
         cin>>u>>v;
         //adj[v].push_back(u);
        adj[u].push_back(v);
    }

    Solution ob;
    bool ans = ob.solve(V, adj);
    if(ans == true){
        cout<<"found"<<endl;
    }
    else {
       cout<<"Not Found"<<endl;
    }}
    return 0;
}