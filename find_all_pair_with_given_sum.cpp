// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

vector<pair<int, int>> allPairs(int a[], int b[], int n, int m, int x)
{
    set<int> s;
    for (int i = 0; i < m; i++)
    {
        s.insert(b[i]);
    }
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        if (s.find(x - a[i]) != s.end())
        {
            v.emplace_back(a[i], x - a[i]);
        }
    }

    sort(v.begin(), v.end());
    return v;
}
