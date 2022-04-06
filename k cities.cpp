#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
set<vector<int>>s;
int flag=0;
void helper(vector<vector<int>>&v,vector<bool>&check,vector<vector<int>>&res,vector<int>temp,int k,int node){
    if(k==0){
        sort(temp.begin(),temp.end());
        //if(s.count(temp)) return;
        for(int i=0;i<int(temp.size());i++) cout<<temp[i]<<" ";
        //s.insert(temp);
        cout<<endl;
        flag=1;
        //res.push_back(temp);
        return;
    }
    //if(check[node]==true) return;
    for(int i=0;i<int(v[node].size());i++){
        if(check[v[node][i]]==true) continue;
        temp.push_back(v[node][i]);
        check[v[node][i]] = true;
        helper(v,check,res,temp,k-1,v[node][i]);
        //check[v[node][i]] = false;
        temp.pop_back();
    }
   // check[node]=true;
    return;
}

int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n+1,vector<int>());
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int k;
    cin>>k;
    vector<bool>check(n+1,false);
    vector<vector<int>>res;
    for(int i=1;i<=n;i++){
        //if(check[i]==true) continue;
        vector<int>temp;
        temp.push_back(i);
        check[i]=true;
        helper(v,check,res,temp,k-1,i);
       for(int j=i+1;j<=n;j++) check[j]=false;
        temp.pop_back();
    }
    if(flag==0) cout<<-1;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
