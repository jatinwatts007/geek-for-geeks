#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int i,u;
         cin>>i;
         u=i;
         int h=0;
         while(i!=0)
         {
             int k=1;
             for(int j=2;j<=(i%10);j++)
             {
                 k=k*j;
             }
             h=k+h;
             i=i/10;
         }
         if(h==u)
         {
             cout<<"Strong"<<endl;
         }else{
             cout<<"Not Strong"<<endl;
         }
         
     }
	//code
	return 0;
}
