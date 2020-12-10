#include<iostream>
using namespace std;
int main()
 {
         int flag=0,c=1;
         int * arr = new int[6];
         cin>>arr[5];
         for(int i=1;i<5;i++)
         {
    
             cin>>arr[i];
         }
         
         if(arr[5]==0)
            {
             cout<<"counter no.1";
             exit(1);
         }
         
         while(true)
         {
             if(arr[c]-((5)*flag+(c))<=0)
             {
                 if(c==5){ cout<<"counter is 1";break;}
                 cout<<"counter is"<<c+1;
                 break;
             }
             c++;
             
             if(c>5)
             {
                 c=1;
                 flag++;
             }
         }
         
	//code
	return 0;
}
