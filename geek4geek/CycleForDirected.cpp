#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    bool solve(int V, vector<int> adj[])
    {
        queue<int>q;
        vector<int> indegree(V,0);

        for(int i=0 ;i<V;i++){
            for(auto val : adj[i]){
                indegree[val]++;
            }
        }
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        int cnt =0;
        while(!q.empty()){
            int p = q.front();
            q.pop();
            cnt++;
            for(auto it : adj[p]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        if(cnt != V) {
            return true;
        }
        else{
            return false;
        }
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