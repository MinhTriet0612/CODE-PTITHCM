#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int n;
    int location;
    cin>>n;
    for ( int i=1 ; i<=n ; i++)
    {
        cin>>a[i];
    }
    cin>>location;
    for ( int i=location; i<= n; i++)
    {
        a[i]=a[i+1];
    }
    n--;
    for ( int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
}