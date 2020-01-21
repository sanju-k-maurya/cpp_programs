#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int n;
	int sumlr=0,sumrl=0;
	cout<<"Enter dimension of n*n matrix :";
	cin>>n;
	int a[n][n];
	cout<<"Now enter elements at positions: "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<" : ";
			cin>>a[i][j];
		}	
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			{
				if(i==j)
				{
					sumlr=sumlr+a[i][j];
				}
			}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=(n-1);j>=0;j--)
		{
			if(i+j==(n-1))
			{
				sumrl=sumrl+a[i][j];
			}
		}
	}
	
	int diff = sumlr-sumrl;
	int ans = abs(diff);
	cout<<"Difference b/w both diagonal is: "<<ans<<endl;
	return 0;

}