// SMALL FACTORIALS

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans[200],m=1,c=0;
        ans[0]=1;
        for(int i=2;i<=n;i++)
 	{
            for(int j=0;j<m;j++)
	    {
                int p=ans[j]*i+c;
                ans[j]=p%10;
                c=p/10;
            }
            while(c)
 	    {
                ans[m]=c%10;
                c=c/10;
                m++;
            }
        }
        for(int i=m-1;i>=0;i--)
            cout<<ans[i];
        cout<<endl;
    }
    return 0;
}
