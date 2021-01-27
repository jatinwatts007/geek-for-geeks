
class Solution {
public:    
    vector<int> rotation(int n)
    {
        vector<int> v(n,0);
        int i=0;
        for(int j=1;j<=n;j++)
        {
            int count=0;
            while(count!=j+1)
            {
                if(v[i]==0)count++;
                if(count==j+1)break;
                i++;
                if(i==n)i=0;
            }
            v[i]=j;
        }
        return v;
        // Code Heree
    }
};
