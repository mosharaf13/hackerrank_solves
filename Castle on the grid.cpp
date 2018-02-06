#include<bits/stdc++.h>
using namespace std;
char ara[101][101];
int beginx,beginy,endx,endy;
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int vis[100][100];
int n,res=100000000;
int dfs(int i,int j,int step,int begx,int begy)
{
    //cout<<i<<" "<<j<<" "<<step<<" "<<begx<<" "<<begy<<endl;
    if(i<0 || i>=n || j<0 || j>=n || ara[i][j]=='X')
    {
        return 0;
    }
    if(i==endx && j==endy)
    {
        res=min(res,step);
    }
    //vis[i][j]=1;
    for(int it=0;it<4;it++)
    {
        int nx=i+fx[it];
        int ny=j+fy[it];
        if(vis[nx][ny]==0)
        {
            if(nx!=begx && ny!=begy &&!(nx<0 || nx>=n || ny<0 || ny>=n || ara[nx][ny]=='X'))
            {
                dfs(nx,ny,++step,nx,ny);
            }
            else
            {
                dfs(nx,ny,step,begx,begy);
            }
        }
    }
    return res;
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>ara[i][j];
    }
    cin>>beginx>>beginy>>endx>>endy;
    if(beginx==endx and beginy==endy)
        cout<<0<<endl;
    else
        cout<<dfs(beginx,beginy,0,beginx,beginy)+1<<endl;

    return 0;
}
