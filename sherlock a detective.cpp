#include<iostream>
using namespace std;
int main()
 {
     int i,j,n,t,k;
     cin>>t;
     while(t--)
     {
         cin>>n;
         int arr[n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
        }
        for(i=1;i<=n;i++)
        {
            k=0;
            for(j=0;j<n;j++)
             {
                 if(arr[j]==i)
                 {
                     k++;
                     j=n;
                 }
             }
             if(k==0)
             {
                 cout<<i<<" ";
             }
        }
         cout<<endl;
         
     }
	//code
	return 0;
}
