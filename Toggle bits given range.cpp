#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
    int toggleBits(int N , int L , int R) 
    {
        queue<int>v;
        while(N!=0)
        {
            v.push(N%2);
            N=N/2;
        }
        int total=0,y=1;
        while(!v.empty())
        {
            if(y>=L && y<=R)
            {
                if(v.front()==0)total=total+pow(2,y-1);
                
            }
            else if (v.front()==1) 
            {
                total=total+pow(2,y-1);
            }
            v.pop();
            y++;
            
        }
        return total;
        // code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,L,R;
        
        cin>>N>>L>>R;

        Solution ob;
        cout << ob.toggleBits(N,L,R) << endl;
    }
    return 0;
}  // } Driver Code Ends
