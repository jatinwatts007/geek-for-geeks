#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
        int i,j=1;
        cin>>i;
        if(i%2==1)
        {
            cout<<1<<endl;
        }else{
            while(i%2!=1){
                i=i/2;
                j=j*2;
            }
            cout<<j<<endl;
        }
     }
	//code
	return 0;
}
