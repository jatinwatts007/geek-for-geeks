 {
     int i,j,k,l,t,n;
     cin>>t;
     while(t--)
     {
         l=0;
         cin>>n;
         int *arr=new int [n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
             if(arr[i]==0)
             {
                 l++;
             }
         }
         cout<<l<<endl;
         delete [] arr;
     }
	//code
	return 0;
}
