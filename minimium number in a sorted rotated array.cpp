#include<iostream>
using namespace std;
int main()
 {
     int i,j,k,n,t;
     cin>>t;
     while(t--)
     {
         k=0;
         cin>>n;
         int *arr=new int[n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         for(i=0;i<n-1;i++)
         {
             if(arr[i]>arr[i+1])
             {
                 cout<<arr[i+1];
                 k++;
             }
         }
         if(k==0)
         {
             cout<<arr[0];
         }
         cout<<endl;
         delete[] arr;
     }
	//code
	return 0;
}
