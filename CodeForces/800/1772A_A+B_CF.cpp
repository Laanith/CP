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
You are given an expression of the form a+b
, where a
 and b
 are integers from 0
 to 9
. You have to evaluate it and print the result.

Input
The first line contains one integer t
 (1≤t≤100
) — the number of test cases.

Each test case consists of one line containing an expression of the form a+b
 (0≤a,b≤9
, both a
 and b
 are integers). The integers are not separated from the +
 sign.

Output
For each test case, print one integer — the result of the expression.
*/

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        pint((x[0] - '0') + (x[2] - '0'));
    }

    return 0;
}