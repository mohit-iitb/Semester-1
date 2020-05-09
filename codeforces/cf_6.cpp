#include<iostream>
using namespace std;
int main()
{
	int n,flag,k=1;
	cin>>n;
	int arr[n],d[n];
	
	for(int i=0;i<n;i++)
		cin>>arr[i];

	d[0]= arr[n-1];
	//cout<<d[0];      

	for(int i=n-2;i>=0;i--)
	{
		flag=0;
		for(int j=0;j<k;j++)
		{	
			if(arr[i]==d[j])
			{
				flag = 1;
				break;
			}	
			
		}
		if(flag==0)
		{

				d[k]=arr[i];
				//cout<<d[k]<<endl;
				k++;
			
		}
	}
	cout<<k<<endl;
	for(int i=k-1;i>=0;i--)
		cout<<d[i]<<" ";
}