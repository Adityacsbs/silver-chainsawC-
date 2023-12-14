
#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k;
	cin>>n;
	k=2*n-1;
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=k;j++)
		{
			if(i>(2*n)/2)
			{
				if(j==i||j==(2*n)-i)
				{
					cout<<(2*n)-i;
				}
				else
				{
					cout<<" ";
				}
			}
			else
			{
			
		if(j==i||j==(2*n)-i)
		{
			cout<<i;
		}
		else
		{
			cout<<" ";
		}
	}
		}
		cout<<"\n";
	}
}