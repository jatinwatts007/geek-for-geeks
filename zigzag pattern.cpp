#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
         int n,temp,i;
         cin>>n;
         int * arr = new int[n];
         for( i=0;i<n;i++){
             cin>>arr[i];
         }
         for( i=0;i<n-1;i++){
             if(i%2==0){
                 if(arr[i]>arr[i+1]){
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                 }
             }else{
                 if(arr[i]<arr[i+1]){
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp; 
                 }
             }
             cout<<arr[i]<<" ";
         }
         cout<<arr[n-1]<<endl;
     }
     
	//code
	return 0;
}
