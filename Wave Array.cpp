#include<bits/stdc++.h>
using namespace std;
void func(int* arr, int n){
    for(int i=0;i<n-1;i++){
        if(i%2==0 && arr[i]>arr[i+1]){
            int a=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=a;
        }
        else if(i%2==0 && arr[i]<arr[i+1]){
            int a=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=a;
        }
        else{
            
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int* arr=new int[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    func(arr,n);
	}
	return 0;
}
