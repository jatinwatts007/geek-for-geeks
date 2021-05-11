#include <queue>
using namespace std;
void f(int* a,int size,int k)
{
    deque<int> q;
    for(int i=0;i<size;i++)
    { 
        while(!q.empty()&& a[q.back()]<a[i])
            {
                q.pop_back();
                    
            }
            q.push_back(i); 
            while(i>k-1 && q.front()<=i-k)
            {
                q.pop_front();
            }
            if(i>=k-1)
            {
                cout<<a[q.front()]<<" ";
            } 
    } 
    cout<<endl; 
} 
int main()
{ 
    int t,i,j=0,N,k;int* a;
    cin>>t;
    while(j<t)
    { 
        cin>>N;
        cin>>k;
        a=new int[N];
        for(i=0;i<N;i++)
        { 
            cin>>a[i];
        }
        f(a,N,k);
        j++;
    }
    return 0;
}
