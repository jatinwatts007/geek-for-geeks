#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


void limak(string s, int n,vector<string> v){
    int arr[26] = {0};
    int l = int(s.length());
    for(int i=0;i<l;i++){
        arr[s[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(arr[i]>=2){
            for(int j=0;j<26;j++){
                string t = "";
                if(i==j && arr[i]>2){
                    t+='a'+i;
                    t+='a'+i;
                    t+='a'+i;
                    v.push_back(t);
                    continue;
                }
                if(j==i && arr[i]==2){
                    continue;
                }
                if(arr[j]>0){
                    t+='a'+i;
                t+='a'+j;
                t+='a'+i;
                v.push_back(t);
                }
                
            }
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<int(v.size());i++){
        cout<<v[i]<<endl;
    }
    
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    string s;
    cin>>s;
    string str="";
    vector<string> v;
    limak(s,n,v);
    return 0;
}
