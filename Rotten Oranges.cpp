using namespace std;
int rottenoranges(int m,int n)
{
    int arr[m][n];
    queue<int>q1;
    queue<int>q2;
    int p=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==2)
            {
                q1.push(i);
                q2.push(j);
                p++;
            }
        }
    }
    int q=0,x,y,c=0;
    while(p--)
    {
        x=q1.front();
        y=q2.front();
        
        if(arr[x-1][y]==1 && x!=0)
        {
            q1.push(x-1);
            q2.push(y);
            arr[x-1][y]=2;
            q++;
        }
        
        if(arr[x+1][y]==1 && x!=m-1)
        {
            q1.push(x+1);
            q2.push(y);
            arr[x+1][y]=2;
            q++;
        }
        
        if(arr[x][y-1]==1 && y!=0)
        {
            q1.push(x);
            q2.push(y-1);
            arr[x][y-1]=2;
            q++;
        }
        
        if(arr[x][y+1]==1 && y!=n-1)
        {
            q1.push(x);
            q2.push(y+1);
            arr[x][y+1]=2;
            q++;
        }
        q1.pop();
        q2.pop();
        if(p==0&&q!=0)
        {
            p=q;
            q=0;
            c++;
        }
    }
for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==1)
            {
                return -1;
            }
        }
    }
    return c;
    
}
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int m,n;
         cin>>m>>n;
         cout<<rottenoranges(m,n)<<endl;
     }
	//code
	return 0;
}
