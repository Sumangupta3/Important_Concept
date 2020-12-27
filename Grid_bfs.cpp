#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int a[101][101];
int d[101][101];
bool vis[101][101];
int n,m;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int isVal(int x,int y)
{ 
    if(x>n || x<1 || y>m || y<1)
    return -1;

    if(vis[x][y]==1)
    return -1;

    else return 1;
}
void bfs(int x,int y)
{  
    queue <pair<int,int>>q;
    q.push({x,y});
    vis[x][y]=1;
    d[x][y]=0;
    while(!q.empty())
    {
        int curx=q.front().first;
        int cury=q.front().second;

        q.pop();
        for(int i=0;i<4;i++)
        {
            int nx=curx+dx[i];
            int ny=cury+dy[i];

            if(isVal(nx,ny)==1)
            {
                vis[nx][ny]=1;
                d[nx][ny]=d[curx][cury]+1;
                q.push({nx,ny});
            }
        }
    }
  

}
int main()
{
    cin>>n>>m;

   int srcx,srcy;
   cin>>srcx>>srcy;
    bfs(srcx,srcy);
   for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++) cout<<d[i][j]<<" ";
        cout<<endl;
    }
    
return 0;
}