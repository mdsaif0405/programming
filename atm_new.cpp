#include <iostream>
//#include <stdlib.h>
//#include <math.h>

using namespace std;

int main()
{
   int amt;
   float bal,rem_bal;

   cin>> amt;
   cin>> bal;

   if(amt%5==0)
   {
	if ( (float)bal/amt<1.0 || bal/amt==1)
	{
	   cout<< "insufficient balance!!!!"<<endl;
	   exit(0);
	}
	if(amt<bal)
	{	
		rem_bal = bal-amt-(0.5);
	        cout<< rem_bal;
	}
	else
	cout<< bal;	
    } 	   
   else
   {
      cout<< bal <<endl;
   }
   return 0;


}
