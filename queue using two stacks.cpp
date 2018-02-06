#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            int temp;
            cin>>temp;
            q.push(temp);
        }
        else if(t==2)
        {
            q.pop();
        }
        else
        {
            cout<<q.front()<<endl;
        }
    }
    return 0;
}

