#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
  //  pair<int, int> pi;
    vector<pair<int, int>> vec;

    cin>>t;
    int x,y,c,d,e,m;
    while (t--)
    {
        cin>>n>>m;
        cin>>x>>y;
        cin>>c;
        for(int i=0;i<c;i++){
            int p,q;
            cin>>p>>q;
            vec.push_back(make_pair(p,q));
            

        }
        sort(vec.begin(),vec.end());
        //  for(int i=0;i<c;i++)
        //  {
        //     cout<<vec[i].first <<" "<<vec[i].second<<endl;
        //  }
        c= min(c,10);
        int res=abs(x-vec[c-1].first)+abs(y-vec[c-1].second);
        
        for(int i=0;i<c;i++){
            int p,q;
            p=vec[i].first;
            q=vec[i].second;
            res+=abs(x-p) + abs(y-q);
            x=p;
            y=q;

        }
        cout<<"The shortest path has length "<<res<<endl;
        


    }
    
    return 0;
    
} 
