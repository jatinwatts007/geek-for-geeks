using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){    
         int r;
         cin>>r;
         int l=0;
         for(int i=1;i<r;i++){
             int ans=pow(r,2)-pow(i,2);
             int c = ceil(sqrt(ans));
             int f = floor(sqrt(ans));
             if(c==f){
                 l++;
             }
         }
         cout<<l*4+4<<endl;
     }
	//code
	return 0;
}
