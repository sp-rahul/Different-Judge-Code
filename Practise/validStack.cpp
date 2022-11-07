#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int l,x,y,i=0,f=0;
    stack<char> st;
    cin>>s;
    l=sizeof(s);
    for(int i=0;i<l;i++)
    {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
        {
            st.push(s[i]);
        }
        else if (st.top() == s[i] && !st.empty())
        {
            st.pop();
        }
        else {
            f=1;
        }
        
    }
    if(f==0)
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    return 0;
}