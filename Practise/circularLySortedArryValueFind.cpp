#include<bits/stdc++.h>
using namespace std;
bool find(int arr[], int x)
{
    int hi = sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if (arr[mid]==x){
            return true;
        }
        if (arr[mid]<arr[hi]){
            if(x<= arr[hi] && x>arr[mid])
            {
                lo=mid+1;
            }
            else{
                hi = mid-1;
            }
        }
        else {
            if(x>=arr[lo] && arr[mid] < x){
                hi = mid-1;
            }
            else {
                lo = mid+1;
            }
        }
       
    }

}
int main()
{
    int arr[]={4, 5, 6, 7,1 , 2, 3};
    if(find(arr, 4)){
        cout<<"Found"<<endl;

    } else {
        cout<<"Not found"<<endl;
    }

    return 0;
}