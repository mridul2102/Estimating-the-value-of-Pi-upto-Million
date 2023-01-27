#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    long double pi=0;
    long long int n = 9223372036854775807;
    
    cout << setprecision(64);

    
    for (long long int i=0;i<n;i++)
    {
        pi=pi+4*pow(-1,i)/(2*i+1);
        
        if (i%100000000==0)
        {
            cout << "estimation of pi after" << " "<< i << " " << "terms is:"<< fixed << pi << endl;
                
        }
    }
    return 0;
}
