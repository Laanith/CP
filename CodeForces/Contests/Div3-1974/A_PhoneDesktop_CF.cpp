
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


A. Phone Desktop
time limit per test : 1 second
memory limit per test : 256 megabytes
input : standard input
output : standard output
Little Rosie has a phone with a desktop (or launcher, as it is also called). The desktop can consist of several screens. Each screen is represented as a grid of size 5×3
, i.e., five rows and three columns.

There are x
 applications with an icon size of 1×1
 cells; such an icon occupies only one cell of the screen. There are also y
 applications with an icon size of 2×2
 cells; such an icon occupies a square of 4
 cells on the screen. Each cell of each screen can be occupied by no more than one icon.

Rosie wants to place the application icons on the minimum number of screens. Help her find the minimum number of screens needed.

Input
The first line of the input contains t
 (1≤t≤104
) — the number of test cases.

The first and only line of each test case contains two integers x
 and y
 (0≤x,y≤99
) — the number of applications with a 1×1
 icon and the number of applications with a 2×2
 icon, respectively.

Output
For each test case, output the minimal number of required screens on a separate line.

Example
input : 
11
1 1
7 2
12 4
0 3
1 0
8 1
0 0
2 0
15 0
8 2
0 9
output : 
1
1
2
2
1
1
0
1
1
2
5
*/

void solve()
{
    int x, y;
    cin >> x >> y;

    int screens_for_2x2 = (y + 1) / 2;

    int used_cells_by_2x2 = screens_for_2x2 * 2 * 4;
    int total_screens = screens_for_2x2;

    int remaining_cells = screens_for_2x2 * 15 - y * 4;

    if (remaining_cells >= x)
    {
        cout << total_screens << endl;
    }
    else
    {
        x -= remaining_cells;
        int additional_screens_for_1x1 = (x + 14) / 15;
        total_screens += additional_screens_for_1x1;
        cout << total_screens << endl;
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
