#include<bits/stdc++.h>
#include<queue>
#include<vector>
using namespace std;
int n=200;
vector <int>v[200];

int bfs(int node)
{
    int color[200]={0};
    //void memset(color,-1,n);

    int visit[200]={0};
    queue <int> q;
    q.push(node);
    color[node]=1; 
    while (!q.empty())
    {
        int fr=q.front();
        int d = color[fr]==1?2:1;
        q.pop();
        for(int i=0;i<v[fr].size();i++)
        {0
        
            int x= v[fr][i];
            if(color[x]==color[fr]) return 0;
            if(!visit[x])
            {
                 q.push(x);
                visit[x]=1;
                color[x]=d;
               // cout<<x<<" "<<color[x]<<endl;
               
            }
        }
    }
    return 1;
}

int main()
{
    int n,l,a,b;
    while (1)
    {
        scanf("%d",&n);
        if (n==0) break;
        scanf("%d",&l);
        for (int i=0;i<l;i++)
        {scanf("%d%d",&a,&b);
           v[a].push_back(b);
           v[b].push_back(a);
        }
        if (bfs(0)) printf("BICOLORABLE.\n");
        else printf("NOT BICOLORABLE.\n");
        for (int i=0;i<n;i++) v[i].clear();
    }
    return 0;
}