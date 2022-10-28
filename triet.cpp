#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int n;
    int a[100];
    int check=0;
    cin>>n;
    int i,j;
    
    if (n<2)
    {
        cout<<"khong co so nguyen to nao";
    }
    if (n>=2)
    {
        cout<<"2"<<" ";
    
    
    for ( i = 2; i <= n; i++)
    {   
        
        for (  j= 2; j <= sqrt(i); j++)
        {
        
            if (  i % j == 0)
            { 
                check=1;
            }
            else{
                check=0;
            }

        }
        if (check==0 && i%2!=0)
        {
        
            cout<<i<<" ";
        }
    }
    }
}