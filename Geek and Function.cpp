#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
cin>>t;
while(t--)
{
    long n,k;
    cin>>n>>k;
    if(n<10){
    cout<<0<<"\n";
    }
    else
    {
        int ans=0;
            while(n%10!=0 && k>0)
            {
                ans=n;
                n=n^(n%10);
                k--;
    
            }
            cout<<n<<"\n";
    }
    
}


	return 0;
}
