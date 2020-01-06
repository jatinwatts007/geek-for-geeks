#include<iostream>
using namespace std;
int main()
 {
     int i,j,k,t,n,l;
     cin>>t;
     while(t--)
     {
         cin>>n;
         int *arr = new int[n];
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
                    k=arr[i];
                    arr[i]=arr[j];
                    arr[j]=k;
                }
            }
         }
         l=0;
         for(i=0;i<n;i++){
             if(arr[i]==arr[i+1]){
                l++;
                i=i+1;
             }
         }
         cout<<l*2<<endl;
     }
	//code
	return 0;
}
