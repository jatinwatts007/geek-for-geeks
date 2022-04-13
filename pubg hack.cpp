#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int arr[26]={0};
    for(int i=0;i<s.length();i++)
    {
        arr[s[i]-'a']++;
    }
    vector<string>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string k;
        cin>>k;
        int arr1[26]={0};
        for(int j=0;j<k.length();j++)
        {
            arr1[k[j]-'a']++;
        }
        int count=0;
        for(int l=0;l<26;l++)
        {
            if(arr[l]!=arr1[l])
            {
                count++;
                break;
            }
        }
        if(count==0) v.push_back(k);
        
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
	// your code goes here
	return 0;
}
