#include<iostream>
using namespace std;

int deathCircle(int n, int k)
{
   if(k==0) return 1;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       arr[i]=i+1;
   }
   int i=0;
   int x;
   int count=0;
   int count1=0;
   while(count1<n)
   {
       count=0;
       while(count!=k)
       {
           if(i==n)i=0;
           if(arr[i]!=0)count++;
           if(count==k)break;
           i++;
           
       }
       x=arr[i];
       arr[i]=0;
       count1++;
       i++;
   }
   return x;
}
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,k;
         cin>>n>>k;
         cout<<deathCircle(n,k)<<endl;
     }
	return 0;
}
