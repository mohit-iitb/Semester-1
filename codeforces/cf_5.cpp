#include<iostream>
using namespace std;
int main()
{
	int t,a[100],b[100],n;
	cin>>t;
	for(int i=0;i<t;i++)
		cin>>a[i]>>b[i];
	for(int i=0;i<t;i++)
	{	n=0;
		while(a[i]%b[i]!=0)
		{
			a[i]+=1;
			n++;
		}	
		cout<<n<<endl;
	}
	


}