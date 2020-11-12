using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
         int i,j;
         cin>>i;
         j=i;
         while(i>0){
             cout<<i<<" ";
             i=i-5;
         }
         while(i!=j){
             cout<<i<<" ";
             i=i+5;
         }
         cout<<j<<endl;
     }
	//code
	return 0;
}
