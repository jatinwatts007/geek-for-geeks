using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
         int i,j,n,sum=0,m=0,h=0,v=0;
         cin>>n;
         int *arr = new int[n];
         for(i=0;i<n;i++){
             cin>>arr[i];
             sum=arr[i]+sum;
         }
         for(i=0;i<n;i++)
         {
             m=arr[i-1]+m;
             h=sum-arr[i]-m;
             if(h==m){
                 cout<<i+1<<endl;
                 v++;
                 break;
             }
         }
         if(v==0){
             cout<<"-1"<<endl;
         }
     }
	//code
	return 0;
}
