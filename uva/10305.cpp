#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int indegree[101];
    int res[101];
    vector<int> adj[101];
    while(cin>>n>>m && n!=0 || m!=0)
    {
        for(int i=0;i<101;i++){
            adj[i].clear();

        }
        int x,y,z;
        memset(res,0,sizeof(res));
        memset(indegree,0,sizeof(indegree));

        while(m--){
            cin>>x>>y;
            adj[x].push_back(y);
            indegree[y]++;
        }
        int k=0;
        queue<int> q;
        for(int i=1;i<=n;i++){
            if(indegree[i]==0){
                res[k++]=i;
                q.push(i);

            }
        }
        while (!q.empty())
        {
            int v = q.front();
            q.pop();
            for(auto u : adj[v]){
                indegree[u]--;
                if(indegree[u]==0){
                    res[k++]=u;
                    q.push(u);

                }
                
            }
            
        }
        for(int i=0;i<k;i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
        


        
    }
    
    return 0;
}