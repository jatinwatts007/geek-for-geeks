#include<bits/std++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int k;
	    cin>>k;
	    long long int ans=pow(a,b);
	    long long int x=pow(10,k-1);
	    ans=ans/x;
	    cout<<ans%10<<endl;
	}
	return 0;
}
