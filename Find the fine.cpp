#include<bits/stdc++.h>
#include<iostream>
using namespace std;
long long int func(int* car,int* fine,int n,int d){
    long long int sum=0;
    if(d%2==0){
        for(int i=0;i<n;i++){
            if(car[i]%2==1){
                sum+=fine[i];
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(car[i]%2==0){
                sum+=fine[i];
            }
        }
    }
    return sum;
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,d;
	    cin>>n>>d;
	    int* car=new int[n];
	    int* fine=new int[n];
	    for(int i=0;i<n;i++){
	        cin>>car[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>fine[i];
	    }
	    cout<<func(car,fine,n,d)<<endl;
	    delete[] car;
	    delete[] fine;
	}
	return 0;
}
