#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
 
// Driver program to test above function
int main()
{
    int t;long long int a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        long long int lcm=(a*b)/gcd(a,b);
        cout<<lcm/a<<" "<<lcm/b<<"\n";
    }
    
} 
