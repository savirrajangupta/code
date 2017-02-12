//WA and TLE(in subtask 3)
#include<iostream>
using namespace std;
int main(){
	int t,o1,o2,i,j,count,res,tempo1,tempo2,repcount,govcount,n;
	cin>>t;
	while(t--)
	{
		repcount=govcount=count=0;
		cin>>o1>>o2;
		n=o1*o2;
		int a[n];
		for(i=1;i<=n;i++)
			cin>>a[i];
		for(i=1;i<=o1;i++)    //for every possible combinations
		{
			j=i;
			govcount=0;
			tempo2=o2;
			while(tempo2--)   //loop through every state
			{
				repcount=0;
				tempo1=o1;
				while(tempo1--)      //for every district in a state
				{
					if(a[j]==1)
						repcount++;
					j++;
					if(j>n)
						j=1;
					//cout<<"repcount="<<repcount<<" j="<<j<<"\n";

				}
				if(repcount>o1/2)
					govcount++;
			}
			if(govcount>o2/2){
				res=1;
				break;
			}
			else
				res=0;
		}
		cout<<res<<"\n";
	}
}
