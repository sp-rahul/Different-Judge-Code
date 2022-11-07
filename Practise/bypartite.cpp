#include<bits/stdc++.h>

using namespace std;
//bool vis[100011];

bool isBipartite(vector<int> adj[], int v, int vis[], int color[])
{
    color[v]=1;
    vis[v]=1;
    queue<int> q;
    q.push(v);
    while(!q.empty())
    {
        int v = q.front();
        //vis[v] = 2;
        q.pop();
        //cout<< ".... "<<endl;
        for(auto u : adj[v])
        {
            if(vis[u]==1){
                 //printf("%d %d\n",u,v);
                //printf("%d %d\n\n",color[u],color[v]);
                if (color[u] == color[v])
                {
                    return false;
                }
               
            }
           
            else{
                vis[u]=1;
                color[u]=1-color[v];
                q.push(u);
                //cout<<u<<". ";
            }

    }
    }
    return true;
}



int main()

{
    int n;
    //cin>>t;
    while(cin>>n && n!=0){
    int x,y,e;


    cin>>e;
    //adj.resize(n);
    //color.resize(n,-1);
//memset(vis,0,sizeof(vis));
    // for(i=0;i<n;i++)
    //     adj[i].resize(n);

    vector<int> adj[n+1];
   // vector<int> color(n+1);
    //vector<int> vis(n+1);
    int color[n+1];
    int vis[n+1];
    

    memset(color, 0, sizeof(color));
    memset(vis, 0, sizeof(vis));
    for(int i=0; i<e; i++)
    {
        adj[i].clear();
    }

    for(int i=0; i<e; i++)
    {
        //cout<<"\nEnter edge vertices of edge "<<i+1<<" :";
        cin>>x>>y;
       adj[x].push_back(y);
       adj[y].push_back(x);
    }
    if(isBipartite(adj,1,vis,color)==1){
        cout<<"BICOLORABLE.\n";
    }
    else{
        cout<<"NOT BICOLORABLE.\n";
    }
    }


    return 0;
}
