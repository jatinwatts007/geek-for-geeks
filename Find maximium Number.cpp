class Solution {
  public:
    string findMax(string N) {
        int arr[10]={0};
        for(int i=0;i<N.length();i++)
        {
            arr[N[i]-'0']++;
        }
        for(int i=9;i>=0;i--)
        {
            for(int j=0;j<arr[i];j++)
            {
                
                cout<<i;
            }
        }
        return  "";
        // code here
    }
};
