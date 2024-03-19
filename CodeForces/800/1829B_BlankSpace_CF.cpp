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
You are given a binary array a
 of n
 elements, a binary array is an array consisting only of 0
s and 1
s.

A blank space is a segment of consecutive elements consisting of only 0
s.

Your task is to find the length of the longest blank space.

Input
The first line contains a single integer t
 (1≤t≤1000
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤100
) — the length of the array.

The second line of each test case contains n
 space-separated integers ai
 (0≤ai≤1
) — the elements of the array.

Output
For each test case, output a single integer — the length of the longest blank space.
*/

void solve()
{
    int n;
    cin >> n;
    int max_zeros = imi;
    int zerocount = 0;
    while (n--)
    {
        int r;
        cin >> r;
        if (r == 0)
        {
            zerocount++;
        }

        else
        {

            max_zeros = max(zerocount, max_zeros);
            zerocount = 0;
        }
    }
    max_zeros = max(zerocount, max_zeros);

    cout << max_zeros << endl;
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