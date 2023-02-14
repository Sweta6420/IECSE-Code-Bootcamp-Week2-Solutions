#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, z;
    cin>>t;
    while(t--)
    {
        cin>>n;
        z=1;
        while(z*2<=n) z*=2;
        cout<<z-1<<'\n';
    }
}