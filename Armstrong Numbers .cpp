// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 //


// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        int sum=0,num=n;
        while(n>0)
        {
            sum=sum+pow(n%10,3);
            n=n/10;
        }
        if(sum==num) return "Yes";
        else return"No";
        // code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
