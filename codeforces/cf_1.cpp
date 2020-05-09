#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	//cout<<"Enter the number";
	cin>>n>>k;
	for(int i=0;i<k;i++)
	{
		if(n%10==0)
			n = n/10;
		else n--;
	}
	cout<<n;
}