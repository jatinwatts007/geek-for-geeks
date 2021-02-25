#include <bits/stdc++.h>
using namespace std;

int matchGame(long long N){
     long long int i,j,t;
     cin>>t;
     while(t--)
     {
         cin>>j;
         if(j%5==0)
         {
             cout<<-1<<endl;
         }
         else{
             cout<<j%5<<endl;
         }
     }
	return 0;
}


int main(){
    int t;
    cin>>t;
    while (t--){
        long long N;
        cin>>N;
        cout<<matchGame(N)<<endl;
    }
}
