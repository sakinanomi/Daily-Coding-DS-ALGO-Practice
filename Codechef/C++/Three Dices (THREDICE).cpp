#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int a,b;
    double sum;
    cin>>a>>b;
    sum=a+b;
    if(sum<6)
    cout<<(6-sum)/6<<"\n";
    else
    cout<<"0\n";
}
int main()
{    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

// Sample input/output 

// Sample Input 1 
// 3
// 1 3
// 2 4
// 2 3

// Sample Output 1 
// 0.333333
// 0
// 0.166666