#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
        int i,n,j;
        cin>>i;
        int k;
        k=355%113;
        if(i==0){
            cout<<3<<endl;
        }else{
             cout<<3<<".";
            long long  h=0;
            for(j=0;j<i;j++){
                n=(k*10)/113;
                cout<<n;
                k=(k*10)%113;
            }
            cout<<endl;
        }
       
        
     }
	//code
	return 0;
}
