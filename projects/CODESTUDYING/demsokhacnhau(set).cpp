#include <iostream>
#include <set>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        set <int> se; // khai bao set
        for (int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            se.insert(x);
        }
        cout<<se.size();
        // moi set.insert chi chua toi da 1 phan tu.
    }

    
}