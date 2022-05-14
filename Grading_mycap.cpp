#include<iostream>
using namespace std;
int main()
{
	int mark[10],n,sum=0,avg,i;
	cout<<"enter number of subjects:";
	cin>>n;
	
	for(i=0;i<n;i++)
	{   
	    cout<<"enter your marks in subject:"<<i+1<<endl;
		cin>>mark[i];
	}
	for(i=0;i<n;i++)
	sum+=mark[i];
	avg=sum/n;
	cout<<"\nyour average is:"<<avg<<endl;
    if(avg>=90)
    cout<<"you got S grade";
    if(avg<90&&avg>=85)
    cout<<"you got A++ grade";
    if(avg<85&&avg>=75)
    cout<<"you got A grade";
    if(avg<75&&avg>=60)
    cout<<"you got B grade";
    if(avg<60&&avg>=50)
    cout<<"you got C grade";
    if(avg<50)
    cout<<"you got D grade";
	return 0;  
}
