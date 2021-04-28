 {
     int i,n,t,j;
     cin>>t;
     while(t--)
     {
         j=0;
         cin>>n;
         int *arr=new int[n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         for(i=0;i<n;i++)
         {
             if(arr[i]>arr[i+1] && j==0)
             {
                cout<<arr[i];
                j++;
             }
         }
             if(j==0)
             {
                 cout<<arr[n-1];
             }
         cout<<endl;
         delete [] arr;
     }
	//code
	return 0;
}
