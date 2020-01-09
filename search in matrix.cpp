#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
        int r,c,i,j,k,n;
        cin>>r>>c;
        int **arr = new int *[r];
        for(i=0;i<r;i++)
        {
            arr [i] = new int [c];
            for(j=0;j<c;j++)
            {
                cin>>arr[i][j];
            }
        }
        cin>>k;
        n=0;
         for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(arr[i][j]==k)
                {
                    cout<<1<<endl;
                    n=1;
                    break;
                }
            }
            if(n==1){
                break;
            }
        }
        if(n==0){
            cout<<0<<endl;
        }
     }
	//code
	return 0;
}
