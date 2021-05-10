#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int T;
	cin>>T;
	while(T--){
	    int n, x;
	    cin >> n >> x;
	    vector <int> arr;
	    for(int i=0; i<n; i++){
	        int y;
	        cin>>y;
	        arr.push_back(y);
	    }
	    sort(arr.begin(), arr.end());
	    vector<int>::iterator upper;
	    upper = upper_bound(arr.begin(), arr.end(), x);
	    cout << n-(upper-arr.begin()) << endl;
	}
	return 0;
	//code
	return 0;
}
