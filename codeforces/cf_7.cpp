//1326B
#include<iostream>
using namespace std;
int main()
{
	int n,max=0;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
		cin>>b[i];

	a[0] = b[0];
	max = a[0];
	cout<<endl<<a[0];
	for(int i=1;i<n;i++)
	{	
		if(a[i-1]>max)
			{max = a[i-1];}
		//cout<<max;
		a[i]=b[i]+max;
		cout<<" "<<a[i];
	}


}