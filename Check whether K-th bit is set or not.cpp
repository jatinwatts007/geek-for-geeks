#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
         int i,j;
         cin>>i>>j;
         for(int k=0;k<j;k++){
             i=i/2;
         }
         if(i%2==0){
             cout<<"No"<<endl;
         }
         else{
             cout<<"Yes"<<endl;
         }
         
     }
	//code
	return 0;
}
