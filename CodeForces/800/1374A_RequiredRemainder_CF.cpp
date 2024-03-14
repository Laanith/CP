#include <bits/stdc++.h>
#define ll long long
#include <algorithm>
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define PYES cout << "YES" << endl
#define PNO cout << "NO" << endl
#define vs vector<string>
#define qi queue<int>
#define si stack<int>
#define pi pair<int, int>
#define ima INT_MAX
#define imi INT_MIN
#define siz size()
#define vvi vector<vector<int>>
#define pb push_back
using namespace std;
void pv(vi A)
{
    cout << endl;
    for (auto x : A)
        cout << x << ' ';
    cout << endl;
}
void pint(int A) { cout << endl
                        << A << endl; }
void pp(pair<int, int> p) { cout << p.first << ' ' << p.second << endl; }
void pvvi(vvi A)
{
    for (auto v : A)
    {
        pv(v);
    }
}

/*!SECTION : Problem Description ::
You are given three integers x,y
 and n
. Your task is to find the maximum integer k
 such that 0≤k≤n
 that kmodx=y
, where mod
 is modulo operation. Many programming languages use percent operator % to implement it.

In other words, with given x,y
 and n
 you need to find the maximum possible integer from 0
 to n
 that has the remainder y
 modulo x
.

You have to answer t
 independent test cases. It is guaranteed that such k
 exists for each test case.

Input
The first line of the input contains one integer t
 (1≤t≤5⋅104
) — the number of test cases. The next t
 lines contain test cases.

The only line of the test case contains three integers x,y
 and n
 (2≤x≤109; 0≤y<x; y≤n≤109
).

It can be shown that such k
 always exists under the given constraints.

Output
For each test case, print the answer — maximum non-negative integer k
 such that 0≤k≤n
 and kmodx=y
. It is guaranteed that the answer always exists.
*/

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        if (n - n % x + y <= n)
        {
            cout << n - n % x + y << endl;
        }
        else
        {
            cout << n - n % x - (x - y) << endl;
        }
    }
    return 0;
}