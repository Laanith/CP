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
Calin has n
 buckets, the i
-th of which contains ai
 wooden squares of side length 1
.

Can Calin build a square using all the given squares?

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤2⋅105
) — the number of buckets.

The second line of each test case contains n
 integers a1,…,an
 (1≤ai≤109
) — the number of squares in each bucket.

The sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output "YES" if Calin can build a square using all of the given 1×1
 squares, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).
*/

void solve()
{
    int n;
    cin >> n;
    ll sum = 0;
    while (n--)
    {
        int r;
        cin >> r;
        sum += r;
    }
    ll srt = sqrt(sum);
    if (srt * srt == sum)
        PYES;
    else
        PNO;
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