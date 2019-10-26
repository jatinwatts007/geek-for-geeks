 {
     int i,j,k,n,t;
     cin>>t;
     while(t--)
     {
         k=0;
         cin>>n;
         int *arr=new int[n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         for(i=0;i<n;i++)
         {
             j=arr[i];
             while(j!=0)
             {
                k=j%10+k;
                j=j/10;
             }
         }
         if(k%3==0)
         {
             cout<<1<<endl;
         }
         else
         {
             cout<<0<<endl;
         }
         delete [] arr;
     }
	//code
	return 0;
}
