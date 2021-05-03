using namespace std;
bool isPowerOfTwo(int n)  
{  
    if (n == 0)  
        return 0;  
    while (n != 1)  
    {  
        if (n%2 != 0)  
            return 0;  
        n = n/2;  
    }  
    return 1;  
} 
int main()
 {
     int t;
     cin>>t;
     while(t--){
         int i;
         cin>>i;
         isPowerOfTwo(i)? cout<<"True\n": cout<<"False\n";  
     }
    
	//code
	return 0;
}
