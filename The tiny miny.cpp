
string tiny_miny(int a, int n);

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,n;
        cin >> a >> n;
        
        cout << tiny_miny(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


string tiny_miny(int a, int n)
{
    // complete the function
    string s1="";
    string s2="";
    for(int i=1;i<=n;i++)
    {
        int j=pow(a,i);
        s2=to_string(j);
        s1=s1+s2;
    }
    sort(s1.begin(), s1.end());
    int k=0;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=='0')
        {
           k++; 
        }else break;
    }
    s1.erase(0,k);
    return s1;
    
}
