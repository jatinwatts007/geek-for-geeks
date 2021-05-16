using namespace std;
int main()
 {
     int t;
     cin>>t;
       while(t--)
       {
           int n;
           int a=0,b=1,c=0;
          int arr1[1000]={0};
           cin>>n;
           int * arr= new int[n];
           for(int i=0;i<n;i++)
           {
               cin>>arr[i];
           }
           while(c<=1000)
           {
               arr1[a]=1;
               arr1[b]=1;
               c=a+b;
               a=b;
               b=c;
           }
           for(int i=0;i<n;i++)
           {
               if(arr1[arr[i]]==1)
               {
                   cout<<arr[i]<<" ";
               }
           }
           cout<<endl;
       }
	//code
	return 0;
}
