#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,arr[1000][3],t,c=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
			cin>>arr[i][j];
	}
	for(int i=0;i<n;i++)
	{	t = 0;
		for(int j=0;j<3;j++)
			if(arr[i][j]==1)
				{	t++;
					if(t>=2)
					{c++;break;}
				}

	}
	cout<<c;


}