#include<bits/stdc++.h>
using namespace std;
int nn;
vector<int> solve( int n, vector<vector<int >> v)
{
   
    vector<int > ans;

    for(int i=0;i<n;i++){
         int j=0,k=i;
         while(k>=0 && j<n){
            ans.push_back(v[j++][k--]);

         }
    }
      for(int i=1;i<n;i++){
         int j=i,k=n-1;
         while(k>=0 && j<n){
            ans.push_back(v[j++][k--]);

         }
    }
    return ans;
}
// vector<int> solve(int n, vector<vector<int>> A)
// 	{
// 		vector<int> res;
// 		for(int k=0;k<n;k++){
// 		    int i=0,j=k;
// 		    while(i<n and j>=0) res.push_back(A[i++][j--]);
// 		}
// 		for(int k=1;k<n;k++){
// 		    int i=k,j=n-1;
// 		     while(i<n and j>=0) res.push_back(A[i++][j--]);
// 		}
// 		return res;
// 	}

int main()
{
    int n,x;
    cin>>n;

    vector< vector<int> > v(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
            //v[i].push_back(x);
        }
    }
    cout<<"K n"<<endl;
    vector <int> ans = solve(n,v);
   // cout<<" vai";
    for(int i=0;i<n*n;i++){
        cout<<ans[i]<<" ";
    }

   
    return 0;
}
