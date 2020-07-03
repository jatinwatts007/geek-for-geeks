#include<bits/stdc++.h>
using namespace std;

int main(){
	cout<<"enter the no. of windows ";
	int n;
	cin>>n;
	
	cout<<"enter the no. of persons in each queue ";
	
	int it=100000;
	int y;
	int z1;
	int z2;
	int a[n];
	
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];	
	}
	
	for(int i=1;i<=n;i++)
	{
		if(a[i]<i)
		{
			cout<<"the queue is "<<i;
			return 0;
		}
		
		else
		{
			int x=a[i]/n;
			if(x<it && a[i]%n<i)
			{
				y=it;
				it=x;
				z2=z1;
				z1=i;
				
			}
			
			if(x<it && a[i]%n>=i)
			{
				y=it;
				it=x;
				z2=z1;
				z1=i;
			}
			
			if(x>it && x<y)
			{
				y=x;
				z2=i;	
			}
		}
	}
	
	if(a[z1]<z1)
	{
		cout<<"the queue is "<<z1;
	}
	
	if(a[z1]>=z1 && a[z2]<z2)
	{
		cout<<"the queue is "<<z2;
	}
	
	if(a[z1]>=z1 && a[z2]>=z2)
	{
		cout<<"the queue is "<<z1;
		 
	}
	
	return 0;	
}
