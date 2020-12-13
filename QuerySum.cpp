
#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long int n,q;
  cin>>n>>q;
  long long int a,b,k;
  long int *f=new long int[n+1]();
  for(long long int i=0;i<q;i++)
  {
    cin>>a>>b>>k;
    a--,b--;
    f[a]+=k;
    if((b+1)<n)
    f[b+1]-=k;
  }
 long long int sum=0;
  long long int max=0;
  for(long long int i=0;i<n;i++)
  {
    sum+=f[i];
    if(sum>max)max=sum;
  }

cout<<max;
  return 0;
}
