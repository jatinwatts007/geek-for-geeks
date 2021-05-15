using namespace std;

int arr[1000][1000];

void interchange(int ,int );
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Back-end complete function Template for C++
//Complete this function
//The array arr is globally declared
void interchange(int r, int c)
{
    int i,j,x;
    for(i=0;i<r;i++)
    {
       x= arr[i][0];
        arr[i][0]=arr[i][c-1];
        arr[i][c-1]=x;
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //Your code here
  
  //Printing the modified matrix

}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int r,c;
	    cin>>r>>c;
	    for(int i=0;i<r;i++)
	    for(int j=0;j<c;j++)
	    cin>>arr[i][j];
	    
	    
	    interchange( r, c);
	}
	return 0;
}

