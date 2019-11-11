#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int i,j,k;
         cin>>i>>j>>k;
         int g=0;
         for(int l=i;l<=j;l++)
         {
             if(l%k==0){
                 g++;
                 i=i+(k-1);
             }
         }
         cout<<g<<endl;
     }
	//code
	return 0;
}
