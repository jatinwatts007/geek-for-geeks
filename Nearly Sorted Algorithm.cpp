#include<iostream>
using namespace std;
int main()
{
     int i,j,k,n,t,x;
     cin>>t;
     while(t--)
     {
         cin>>n>>k;
         int *arr=new int[n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         for(i=0;i<n;i++)
         {
             for(j=i+1;j<n;j++)
             {
                 if(arr[i]>arr[j])
                 {
                     x=arr[i];
                     arr[i]=arr[j];
                     arr[j]=x;
                 }
             }
         }
         for(i=0;i<n;i++)
         {
             cout<<arr[i]<<" ";
         }
         cout<<endl;
     }
	//code
	return 0;
}
