#include <bits/stdc++.h>
using namespace std;
int perfect(long long int n){
    long long int sum=1;
    for(long long int i=2;i*i<=n;i++){
        if(n%i==0){
            if(i*i!=n){
                sum=sum+i+n/i;
            }
            else{
                sum=sum+i;
            }
        }
    }
    if(n==sum){
        return 1;
    }
    else{
        return 0;
    }
    
}
int main()
 {
	//code
	int t;
	long long n;
	cin>>t;
	while(t--){
	    cin>>n;
	    cout<<perfect(n)<<endl;
	}
	return 0;
}
