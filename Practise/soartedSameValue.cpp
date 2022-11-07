#include<bits/stdc++.h>
using namespace std;
int dis(vector<int>  &nums, int x)
{
    return upper_bound(nums.begin(), nums.end(), x)
            - lower_bound(nums.begin(), nums.end(), x);
}
int main()
{
    int n, x;
    cin>>n;
    vector<int > arr;
    for (int i=0; i<n;i++)
    {
        cin>>x;
        arr.push_back(x);

    }
    cout<<"Which value yo want "<<endl;
    cin>>x;
    cout<<dis(arr,x)<<endl;
    return 0;
}