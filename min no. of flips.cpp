#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
        string s;
        cin>>s;
        int a=0,b=0;
        int l=0;
        for(int i=0;i<s.length();i++){
            if(i%2==0){
                if(s[i]=='0'){
                    a++;
                }
                else{
                    b++;
                }
            }else
            if(s[i]=='1'){
                a++;
            }else{
                b++;
            }
        }
        if(a<b){
            cout<<a<<endl;
        }else
        cout<<b<<endl;
     }
	//code
	return 0;
}
