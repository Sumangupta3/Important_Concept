#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int n,m;
int vis[1001][1001]={0};
int isvalid(int x,int y)
{ 
    if(x>n || x<1 || y>m || y<1)
    return -1;

    if(vis[x][y]==1)
    return -1;

    else return 1;
}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

void dfs(int x, int y)
{
  
    vis[x][y]=1;
    cout<<x<<" "<<y<<endl;
    for(int i=0;i<4;i++){
    if(isvalid(x+dx[i],y+dy[i])==1)
      dfs(x+dx[i],y+dy[i]);
    }
}
int main()
{
  cin>>n>>m;
  dfs(1,1);
 return 0;
}