int findExtra(int a[],int b[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
           j=i;
           i=n;
        }
    }
    return j;
 //add code here.
}
