#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string removeAll(string S,string s,string v,int count=0)
{
    if(S[0]=='\0'){
        if(s.size()==v.size()) return s;
        else{
           return removeAll(s,"",s);
        }
        
    }
    int i;
    for( i=0;i<S.size();i++)
    {
        if(S[i]==S[0]) count++;
        if(S[i]!=S[0]) break;
    }
    if(count==1){
        s=s+S[0];
    }
    return removeAll(S.substr(i),s,v);
}


int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         string s;
         cin>>s;
    
             string s1 =removeAll(s,"",s);
        
         
         cout<<s1<<endl;
     }
	//code
	return 0;
}
