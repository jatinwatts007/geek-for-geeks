 {
     int t;
     cin>>t;
     while(t--)
     {
         int i;
         cin>>i;
         int k;
             while(i>9)
             {
                 k=0;
                 k=k+(i%10);
                 i=i/10+k;
             }
         cout<<i<<endl;
     }
	//code
	return 0;
}
