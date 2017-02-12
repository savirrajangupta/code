//most frequent element
//WA and TLE(for 3rd subtask)

#include<iostream>
using namespace std;
int main(){
	int n,m,i,j,res,count,prev;
	cin>>n>>m;
	int a[n],l[m],r[m],k[m];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<m;i++)
		cin>>l[i]>>r[i]>>k[i];
	for(i=0;i<m;i++)
	{
		res=prev=-1;
		count=0;
		for(j=0;j<n;j++)
		{
			if(count>0)
			{
				if(a[j]==prev)
					{
						count++;
						if(count>=k[i])
						{
							res=prev;
							break;
						}
						continue;
					}
				else
					count=0;
			}
			if(a[j]>=l[i] && a[j]<=r[i])
			{
				prev=a[j];
				count++;
				if(count>=k[i])
				{
					res=a[j];
					break;
				}
			}
		}
		cout<<res<<"\n";
	}
}
