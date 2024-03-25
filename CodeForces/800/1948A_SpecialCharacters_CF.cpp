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
You are given an integer n
.

Your task is to build a string of uppercase Latin letters. There must be exactly n
 special characters in this string. Let's call a character special if it is equal to exactly one of its neighbors.

For example, there are 6
 special characters in the AAABAACC string (at positions: 1
, 3
, 5
, 6
, 7
 and 8
).

Print any suitable string or report that there is no such string.

Input
The first line contains a single integer t
 (1≤t≤50
) — the number of test cases.

The only line of each test case contains a single integer n
 (1≤n≤50
).

Output
For each test case, print the answer as follows:

if there is no suitable string, print one line containing the string NO;
otherwise, print two lines. The first line should contain the string YES; on the second line print a string of length at most 200
 — the answer itself (it can be shown that if some answers exist, then there is an answer of length at most 200
). If there are several solutions, print any of them.
*/

void solve()
{
    int n;
    cin >> n;
    if (n % 2)
        PNO;
    else
    {
        PYES;
        string x;
        for (int i = 0; i < n / 2; i++)
        {
            if (i % 2)
                x += "AA";
            else
                x += "BB";
        }
        cout << x << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}