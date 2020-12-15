// SMALL FACTORIALS

#include <iostream>
using namespace std;

int main()
{
	int t; cin>>t;

	int n,k=1;
    	while(t--)
    	{
    		k=1;
    		cin>>n;
    		for(int i=1; i<=n;i++)
    		{
    	    		k*=i;
    		}
    		cout<<k<<endl;
    	}

	return 0;
}
