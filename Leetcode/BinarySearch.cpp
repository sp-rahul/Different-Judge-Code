#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
        int hi = nums.size();
        int low = 0,mid;
        while (low <= hi)
        {
            mid = (low+hi)/2;
            if(nums[mid]== target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else{
                hi = mid-1;
            }

        }
        return low;
    }
int main()
{
    int tar,x,i=0;
    vector<int > v;
    cin>>tar;
    //int a[100];

    while(cin>>x)
    {
        v.push_back(x);
    }
    int y = searchInsert(v,tar);
    cout<<y<<endl;
    // for(int i=0;i<10;i++)
    // {
    //     cout<<a[i]<<" ";
    // }

    return 0;
}
