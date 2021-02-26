#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int num(int x,int y)
{
    if(pow(2,y)>x)
    {
        return pow(2,y-1);
    }
   return num(x,y+1);
}
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         cout<<num(n,0)<<endl;
     }
	//code
	return 0;
}
