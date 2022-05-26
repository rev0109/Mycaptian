#include<iostream>
using namespace std;
int main()
{
	int ar[100],i,size;
	cout<<"enter size if your array"<<endl;
	cin>>size;
	cout<<"enter the elemnts of the array"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>ar[i];
	}
	cout<<"your entered elements are"<<endl;
		for(i=0;i<size;i++)
	{
	cout<<ar[i]<<endl;
	}
	return 0;
	
}
