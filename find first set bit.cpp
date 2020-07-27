#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
         int i,j=1;
         cin>>i;
         if(i==0){
             cout<<0<<endl;
         }
         while(i/2!=0){
             if(i%2==1){
                 cout<<j<<endl;
                 break;
             }else{
                 j++;
             }
             i=i/2;
         }
         if(i==1){
             cout<<j<<endl;
         }
         
     }
	//code
	return 0;
}
