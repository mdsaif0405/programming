#include <iostream>
#include <math.h>
using namespace std;

int main()
{ 
   int n,k; cin>>n>>k;

   int tot=0;
   long long int t;

   for(int i=0; i<n; i++)
   { 
	   cin>> t;
	   if ( t%k==0)
		   tot++;
	   else 
		   tot=tot;
   }
   cout<< tot<<endl;

   return 0;
}

