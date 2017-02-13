//WA and TLE (got AC in only 2 testcases of 3rd subtask)
#include<iostream>
using namespace std;
int main(){
	int t,n,m,i,j,sum,max,sumtemp,k,temp,maxl,maxr;
	cin>>t;
	while(t--)
	{
		sum=0;
		maxl=-1;
		
		cin>>n>>m;
		maxr=n;
		int a[n],b[m];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=1;i<=m;i++)
			cin>>b[i];
		for(i=1;i<=m;i++)
		{
			k=maxl+1;
			n=maxr;
			temp=b[i];
			max=0;;
			maxr=temp-1;
			while(temp+k<=n)
			{
				sumtemp=0;
				for(j=k;j<temp+k;j++)
				{
					sumtemp+=a[j];
				}
				k++;
				if(max<sumtemp)
				{
					maxl=k-1;
					max=sumtemp;
				}
			}
			if(i%2==0)
				sum-=max;
			else
				sum+=max;
			maxr=maxl+temp-1;
			//cout<<"max="<<max<<" maxl="<<maxl<<" maxr="<<maxr<<"\n";
		}
		cout<<sum<<"\n";
	}
}
