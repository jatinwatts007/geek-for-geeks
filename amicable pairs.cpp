#include<iostream>
using namespace std;
int main()
 {
     int i,j,k,t;
     cin>>t;
     while(t--)
     {
         int x=0,n=0; 
         cin>>j>>k;
         for(i=1;i<=j/2;i++)
         {
             if(j%i==0)
             {
                 x=i+x;
             }
         }
         for(i=1;i<=k/2;i++)
         {
             if(k%i==0)
             {
                 n=i+n;
             }
         }
         if(n==j && x==k)
         {
             cout<<1<<endl;
         }
         else
         {
             cout<<0<<endl;
         }
     }
	//code
	return 0;
}
