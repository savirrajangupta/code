//AC
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,n,i,sum,flag;
  cin>>t;
  while(t--)
  {
    sum=flag=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
      if(a[i]==0)
      {
        sum+=1100;
        flag=1;
      }
      else if(flag==1)
      sum+=100;
    }
    cout<<sum<<"\n";
  }
  return 0;
}
