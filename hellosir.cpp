#include <bits/stdc++.h>

#define ll long long int
#define ld long int
#define nl "\n"
#define ss second
#define ff first
#define pb push_back
#define pp pop_back
#define mp make_pair
#define all(x) x.begin(), x.end()

using namespace std;

/*--------------------------------------------------------------------------------------------------------------------------*/
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}
int adigit(ll n)
{
    n = n % 10;
    return n;
}
int getSum(string str)
{
    int sum = 0;
    for (int i = 0; i < str.length(); i++)
    {
        sum = sum + str[i] - 48;
    }
    return sum;
}
bool isPrime(unsigned ll n)
{
    if (n <= 1)
        return false;
    for (unsigned ll i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
/*------------------------------------------------------------------------------------------------------------------------*/

void solve()
{
    ll a,b,c;
    cin >> a >>  b >> c;
    ll sum = a+b;
    ll ans = sum/c;
    ll cnta = a/c;
    ll cntb = b/c;
    ll cntr = a%c;
    ll cntre = b%c;
    if(ans == cnta+cntb) cout << ans << " 0" <<nl;
else
    cout <<ans << " "<< c - max(cntr,cntre) ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
