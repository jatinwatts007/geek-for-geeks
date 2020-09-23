#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         string s;
         cin>>s;
         for(int i=0;i<s.length();i++)
         {
             switch (s[i])
             {
                case 'X':
                    a=a+10;
                    break;
                case 'V':
                    a=a+5;
                    break;
                case 'I':
                    a=a+1;
                    break;
                case 'L':
                    a=a+50;
                    break;
                case 'C':
                    a=a+100;
                    break;
                case 'D':
                    a=a+500;
                    break;
                case 'M':
                    a=a+1000;
                    break;
             }
     }
	//code
	return 0;
}
