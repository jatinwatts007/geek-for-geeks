#include<iostream>
using namespace std;
#include<math.h>
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int x,y,n;
         cin>>x>>y>>n;
         int j=n/2;
         int k=n-j;
         x=x*pow(2,k-j);
         
         if(x>y)
         {
             cout<<x/y<<endl;
         }else{
             cout<<y/x<<endl;
         }
         
         
     }
	//code
	return 0;
}
