using namespace std;
int main()
 {
     int i,j,k,l,h,n;
     cin>>l;
     while(l--)
     {
         i=0;
         cin>>h;
         k=h;
         while(k>0)
         {
             if(h%k==0)
             {
                 n=k;
             }
             while(n>0)
             {
                 if(k%n==0)
                 {
                     i=i+n;
                 }
                 n--;
             }
             k--;
         }
         cout<<i<<endl;
     }
	//code
	return 0;
}
