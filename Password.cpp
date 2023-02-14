#include<bits/stdc++.h>
using namespace std;
long long t,n,x;
int main()
{
	cin>>t;
	while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;++i)cin>>x;
        cout<<(10-n)*(9-n)*3<<endl;
    } 
}