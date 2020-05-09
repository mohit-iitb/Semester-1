#include<iostream>
using namespace std;

int fun(int x,int y)
{
    int ret;
    if(x%y!=0)
    {   
        ret = x/y;
        if(ret<1)
            return y-x;
        else
            return (ret+1)*y -x;
    }
    else
        return 0;
}

int main()
{
    int t,i=0,x,a,b,n;
    cin>>t;
    n=t;
    int output[t];
    while(t!=0)
    {
        //cout<<"Enter values of a and b\n";
        cin>>a>>b;
        output[i]=fun(a,b);
        //cout<<endl<<output[i];
        i=i+1;
        t=t-1;

    }

   for(i=0;i<n;i++)
    cout<<output[i]<<endl; 




}