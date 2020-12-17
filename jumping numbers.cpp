#include<bits/stdc++.h>
using namespace std;
vector <int> a;
void jump()
{
    a.push_back(0);
    queue<int> q;
    for(int i=1;i<10;i++)
    {
        q.push(i);
    }
    while(1)
    {
        int u=q.front();
        q.pop();
        a.push_back(u);
        if(u>10000000) return;
        int last=u%10;
        if(last!=0) q.push(u*10+(last-1));
        if(last!=9) q.push(u*10+(last+1));
    }
}
int main()
 {
     int t;
     cin>>t;
     jump();
     while(t--)
     {
        int n;
        cin>>n;
        for(int i=0;i<a.size() && a[i]<=n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
     }
	//code
	return 0;
}
