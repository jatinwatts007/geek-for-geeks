#include <bits/stdc++.h>
using namespace std;
int main() {
    int k,n;
    cin>>k>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
        if(x>=k)
        {
            cout<<"true";
            return 0;
        }
        
    }
    int count=0;
    for(auto i=mp.begin();i!=mp.end();i++)
    {
        if(mp.count(k-(i->first))!=0)
        {
            if((k-(i->first)==(i->first) && (i->second)>1)){
                cout<<"true";
                count++;
                break;
                
            }
            else
            {
                if(k-(i->first)!=(i->first))
                {
                    cout<<"true";
                    count++;
                    break;
                }
            }
        }

    }
    if(count==0) cout<<"false";
	// your code goes here
	return 0;
}
