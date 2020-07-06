#include<bits/stdc++.h>
using namespace std;
main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int** arr=new int*[n];
	    for(int i=0;i<n;i++){
	        arr[i]=new int[m];
	    }
	    
	    for(int i=0;i<n;i++){
	        arr[i][0]=1;
	    }
	    for(int i=0;i<m;i++){
	        arr[0][i]=1;
	    }
	    for(int i=1;i<n;i++){
	        for(int j=1;j<m;j++){
	            arr[i][j]=arr[i][j-1]+arr[i-1][j];
	        }
	    }
	    cout<<arr[n-1][m-1]<<endl;
	    for(int i=0;i<n;i++){
	        delete[]  arr[i];
	    }
	    delete[] arr;
	    
	}
}
