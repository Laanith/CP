#include <bits/stdc++.h>
#define ll long long
#include <algorithm>
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define PYES cout << "YES" << endl
#define PNO cout << "NO" << endl
#define PMINUS cout << -1 << endl
#define vs vector<string>
#define si stack<int>
#define qi queue<int>
#define pi pair<int, int>
#define ima INT_MAX
#define imi INT_MIN
#define siz size
#define pb push_back
#define umapii unordered_map<int, int>
#define vvi vector<vector<int>>
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
void pvs(vs A)
{
    cout << endl;
    for (auto x : A)
        cout << x << " ";
    cout << endl;
}
void ps(string A) { cout << A << endl; }
void pvvi(vvi A)
{
    for (auto v : A)
    {
        pv(v);
    }
}

/*!SECTION : Problem Description ::
A. Chess For Three
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Three friends gathered to play a few games of chess together.

In every game, two of them play against each other. The winner gets 2
 points while the loser gets 0
, and in case of a draw, both players get 1
 point each. Note that the same pair of players could have played any non-negative number of times (possibly zero). It is also possible that no games were played at all.

You've been told that their scores after all the games were played were p1
, p2
 and p3
. Additionally, it is guaranteed that p1≤p2≤p3
 holds.

Find the maximum number of draws that could have happened and print it. If there isn't any way to obtain p1
, p2
 and p3
 as a result of a non-negative number of games between the three players, print −1
 instead.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤500
). The description of the test cases follows.

The first line of each test case contains three integers p1
, p2
 and p3
 (0≤p1≤p2≤p3≤30
) — the scores of the three players, sorted non-decreasingly.

Output
For each testcase, print one number — the maximum possible number of draws that could've happened, or −1
 if the scores aren't consistent with any valid set of games and results.
*/

void solve()
{
    vi p(3);
    for (int i = 0; i < 3; ++i)
    {
        cin >> p[i];
    }

    int d = -1;
    for (int p01 = 0; p01 <= min(p[0], p[1]); ++p01)
    {
        for (int p02 = 0; p02 <= min(p[0], p[2]); ++p02)
        {
            for (int p12 = 0; p12 <= min(p[1], p[2]); ++p12)
            {
                if ((p[0] - p01 - p02) % 2 != 0 || p[0] < p01 + p02)
                    continue;
                if ((p[1] - p01 - p12) % 2 != 0 || p[1] < p01 + p12)
                    continue;
                if ((p[2] - p12 - p02) % 2 != 0 || p[2] < p12 + p02)
                    continue;
                d = max(d, p01 + p02 + p12);
            }
        }
    }
    pint(d);
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