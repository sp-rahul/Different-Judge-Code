#include<bits/stdc++.h>
using namespace std;
int visited[2002];
vector<int> adj[2001];

queue<int> q;
void bfs(int s)
{
//   < visited[src] = 1;
//    minD[src] = dfsN[src] = cnt++;>
q.push(s);
    while(!q.empty())
    {
        s = q.front();
     //   cout << s << " ";
        q.pop();
        for(auto i = adj[s].begin();i != adj[s].end();i++)
        {
            if(!visited[*i])
            {
                visited[*i] = true;
                q.push(*i);
            }
        }
    }

}


bool AllVisited(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
          return false;
    }
    return true;
}
int main()
{
    int n,m,v,u,w;
    
    while (1)
    {
        cin>>n>>m;
        if(n==0 && m==0) break;
         for(int i=0;i<n;i++)
        {
            adj[i].clear();
        }
        memset(visited,0,n);
        for(int i=0;i<m;i++)
        {
            cin>>u>>v>>w;
                adj[u].push_back(v);
            if(w==2)
            {
                adj[v].push_back(u);
            }
        }
   
      bfs(1);
     
        if (AllVisited(n))
            cout << "1\n";
        else
            cout << "0\n";
    }
   
    
    return 0;
}