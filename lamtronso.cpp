#include <iostream>
using namespace std;
int main()
{
   //khai bao
    double a;
    int n;


    //nhap xuat
    cin>>a>>n;

    //giai quyet van de

    double p= a*n; //khai bao 1 bien trung gian
    

    //tim phan thap phan
    
    double k= ( double(p)-int(p) )*10;
    int m;

    if ( k<=5)
    {
        m=p;
        cout<<double(m)/n;
    }
    else 
    {
        m=p;
        m++;
        a= double(m)/n;
        cout<<a;
    }


    

}