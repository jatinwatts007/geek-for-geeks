#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
         int m,n,j=1;
         cin>>m>>n;
         if(m==n){
             cout<<-1<<endl;
         }
         while(m/2!=0 || n/2!=0){
            if((m%2!=n%2)){
                cout<<j<<endl;
                break;
            } else{
                j++;
            }
            m=m/2;
            n=n/2;
         }
     }
	//code
	return 0;
}
