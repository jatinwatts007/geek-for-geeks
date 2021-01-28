void Reverse(int arr[],int start,int end)
{
int mid = (start+end)/2;
int cnt = 0;
for(int i=start;i<=mid;i++)
{
swap(arr[i],arr[end-cnt]);
cnt++;
}
}
void rotateArr(int arr[], int d, int n){

Reverse(arr,0,d-1);
Reverse(arr,d,n-1);
Reverse(arr,0,n-1);
}
