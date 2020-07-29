#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
         string s;
         int n;
         cin>>n;
         cin>>s;
         int l=0;
         int arr[26]={0};
         for(int i=0;i<s.length();i++){
             arr[s[i]-97]++;
         }
         for(int i=0;i<s.length();i++){
             if(arr[s[i]-97]==1){
                 cout<<s[i]<<endl;
                 l++;
                 break;
             }
         }
         if(l==0){
             cout<<-1<<endl;
         }
     }
	//code
	return 0;
}
