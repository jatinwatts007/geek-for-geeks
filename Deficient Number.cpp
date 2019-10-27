 {
     int i,j,n,t;
     cin>>t;
     while(t--)
     {
         j=0;
         cin>>n;
         for(i=1;i<=n/2;i++)
         {
             if(n%i==0)
             {
                 j=j+i;
             }
         }
         j=j+n;
         if(j<(n*2))
         {
             cout<<1<<endl;
         }
         else
         {
             cout<<0<<endl;
         }
     }
	//code
	return 0;
}
