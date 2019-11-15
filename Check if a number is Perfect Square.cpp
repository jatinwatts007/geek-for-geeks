#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    float m=pow(n,0.5);
	    int a=ceil(m);
	    m=m*a;
	    if(n==m){
	        cout<<"1"<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	    
	}
	return 0;
}
