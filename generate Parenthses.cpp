void all(int n,int countx,int county,string s,vector<string> &v)
{
    if(county==n)
    {
        v.push_back(s);
        return;
    }
    if(countx==n)
    {
        all(n,countx,county+1,s+")",v);
        return;
    }
    if(countx==county)
    {
        all(n,countx+1,county,s+"(",v);
        return;
    }
    all(n,countx+1,county,s+"(",v);
    all(n,countx,county+1,s+")",v);
    
}
vector<string> AllParenthesis(int n) 
{
    vector<string> v;
    all(n,0,0,"",v);
    // Your code goes here 
    return v;
}
