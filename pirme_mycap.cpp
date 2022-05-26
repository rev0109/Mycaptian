#include<iostream>
using namespace std;
int main()
{
	int i,j,k,flag=0,a[100],n;
	cout<<"enter a number";
	cin>>n;
	for(i=2;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag++;
				break;
			}
			
			else
			flag=0;
		}
		if(flag==0)
		{
			a[k]=i;
			k++;
		}
	
	}

for(i=0;i<k;i++)
{
	for(j=0;j<=(k/2)+1;j++)
	{
		if(a[i]+a[j]==n)
		cout<<n<<"="<<a[i]<<"+"<<a[j]<<endl;
	}
}
	return 0;
}
