#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
         int n;
         int k=0;
         cin>>n;
         int* arr = new int[n];
         for(int i=0;i<n;i++){
             cin>>arr[i];
         }
         
         for(int i=0;i<n-1;i++){
             for(int j=i;j<n;j++){
                 if(arr[i]>arr[j]){
                     k++;
                 }
             }
         }
         cout<<k<<endl;
     }
	//code
	return 0;
}
