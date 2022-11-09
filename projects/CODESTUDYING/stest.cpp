#include <iostream>
#include <math.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0) return a; //bug
	else 	 return gcd(b,a%b);
} 
int main()
{	
	int testcase; cin>>testcase;
	while(testcase--)
	{	
		int a[100];
		int n; cin>>n;
		int res=0; //bug when res=0 gcd=a[i]
		for(int i=0; i<n; i++)
		{

			cin>>a[i];	//input array(n)

		}

		for(int i=0; i<n; i++)
		{

			res=gcd(res,a[i]);	//result of gcd array(n)

		}
		

		if (res==1) //bug
		{
			cout<<0<<endl;
			continue;
		}
		
		int dem=1; //uoc cua chinh no.
		for(int i=2; i<res; i++)
		{
			if(res%i==0)
			{
				dem++;
			}
		}
			cout<<dem; 
	}

}