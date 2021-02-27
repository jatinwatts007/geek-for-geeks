#include<iostream>
using namespace std;
int main()
{
     int i,j,k,t,n,x;
     cin>>t;
     while(t--)
     {
         int h=0;
         cin>>n>>k;
         int *arr=new int[n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
        }
         for(i=0;i<k;i++)
         {
           for(j=1;j<n;j++)
           {
               if(arr[0]<arr[j])
               {
                    x=arr[0];
                    arr[0]=arr[j];
                    arr[j]=x;
               }
           }
           h=arr[0]+h;
           arr[0]=arr[0]/2;
         }
         cout<<h<<endl;
         delete [] arr;
     }
	//code
	return 0;
}
