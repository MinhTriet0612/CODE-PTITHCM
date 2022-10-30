#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline( std::cin,s);
    
        
    
    for (int i=0;i<=s.size();i++)
    {
        if (i==0 || i>0  && s[i-1]==32 )
        {
            if (s[i]>='a' && s[i]<='z' )
            {
                s[i]-=32;
            }
        }
        else 
        {
            if ( s[i] >='A' && s[i] <='Z' )
            {
                s[i]+=32;
            }
        }
    }
    
    cout<<s;
    
}