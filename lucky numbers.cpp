

#include <bits/stdc++.h>
#define ll long long 
using namespace std;



 // } Driver Code Ends


//User-function template for C++

// Complete the function
// n: Input n
// counter: variable has already been declared in driver code and initialized as 2
// Return True if the given number is a lucky number else return False

bool isLucky(int n, int &count) {
    // add code here
    if(count>n) return 1;
    if(n%count == 0) return 0;
    int np=n;
    np=np-np/count;
    count++;
    return isLucky(np,count);
    
}

// { Driver Code Starts.

/*Driver function to test above function*/
int main() {
    int t;
    cin >> t;//testcases
    while(t--) {
        int n;
        cin>>n;//input n
        int counter = 2;
        
        //calling isLucky() function
        if(isLucky(n, counter))
            cout<<"1\n";//printing "1" if isLucky() returns true
        else
            cout<<"0\n";//printing "0" if isLucky() returns false
    }
    return 0;
}  // } Driver Code Ends
