#include <bits/stdc++.h> 
#define ll long long 
#define ld long double
using namespace std;

void hehe() {
#ifndef RTE
  if (fopen("input.txt", "r")) {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  }
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

int modularExponentiation(long long int x,long long int n,long long int M)
{
    long long int result=1;
    while(n>0)
    {
        if(n % 2 ==1)
            result=(result * x)%M;
        x=(x*x)%M;
        n=n/2;
    }
    return result;
}

long long power(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = power(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
int fact(int n) {
   if (n == 0 || n == 1)
   return 1;
   else
   return n * fact(n - 1);
}
void solve(){
     ll n,i,l,r;cin>>n;
     string s;cin>>s;
     if(n==1){
         l=-1;
         r=-1;
     }
     else{
         for(i=0;i<n;i++){
             if(s[i]=='a'){
                 if(s[i+1]=='b'){
                     l=i+1;
                     r=i+2;
                     break;
                 }
             }
             else if(s[i]=='b'){
                 if(s[i+1]=='a'){
                     l=i+1;
                     r=i+2;
                     break;
                 }
             }
             else
             {
                 l=-1;
                 r=-1;
             }
         }
     }
     cout<<l<<" "<<r<<endl;
     
}

int main(){
     hehe();
     int t;cin>>t;
     while(t--)
     solve();
}