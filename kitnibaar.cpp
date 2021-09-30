#include <bits/stdc++.h>
#define nl "\n"
using namespace std;

int main()
{
map<int,int> m;
m.insert({5,2});
m.insert({2,1});
m.insert({1,1});
m.insert({2,2});

  cout << "Elements in map:\n";
    for (auto it : m)
        cout << "[ " << it.first << ", " << it.second << "]" << nl;
 
    return 0;
}
