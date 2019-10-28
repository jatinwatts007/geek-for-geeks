#include<iostream>
using namespace std;
int main()
 {
	int i,j,k,n,t;
	cin>>t;
	while(t--)
	{
	    j=0;
	    cin>>n>>k;
	    int arr[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]==k)
	        {
	            j++;
	        }
	    }
	    cout<<(j?j:-1)<<endl;
	    
	}
	return 0;
}
