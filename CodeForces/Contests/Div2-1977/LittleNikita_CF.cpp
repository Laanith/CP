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
A. Little Nikita
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
The little boy Nikita was given some cubes as a present. He decided to build a tower out of them.

Initially, the tower doesn't have any cubes. In one move, Nikita either puts exactly 1
 cube on top of the tower or removes exactly 1
 cube from the top of the tower. Is it possible that after n
 moves, the resulting tower has exactly m
 cubes?

Input
Each test contains multiple test cases. The first line of input contains a single integer t
 (1≤t≤100
) — the number of test cases. The description of the test cases follows.

The only line of each test case contains two integers n
 and m
 (1≤n,m≤100
).

Output
For each test case, output "Yes" (without quotes) if Nikita can obtain a tower with m
 cubes, and "No" (without quotes) otherwise.

You can output each letter in any case (lowercase or uppercase). For example, the strings "yEs", "yes", "Yes", and "YES" will be accepted as a positive answer.
*/

void solve()
{
    int n, m;
    cin >> n >> m;
    if (n < m)
        PNO;
    else
    {
        if ((n - m) % 2 == 0)
            PYES;
        else
            PNO;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}