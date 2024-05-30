#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
#define PYES cout << "YES" << endl
#define PNO cout << "NO" << endl
#define PMINUS cout << -1 << endl
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define vs vector<string>
#define qi queue<int>
#define si stack<int>
#define seti set<int>
#define pi pair<int, int>
#define ima INT_MAX
#define imi INT_MIN
#define siz size
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
Monocarp is working on his new site, and the current challenge is to make the users pick strong passwords.

Monocarp decided that strong passwords should satisfy the following conditions:

password should consist only of lowercase Latin letters and digits;
there should be no digit that comes after a letter (so, after each letter, there is either another letter or the string ends);
all digits should be sorted in the non-decreasing order;
all letters should be sorted in the non-decreasing order.
Note that it's allowed for the password to have only letters or only digits.

Monocarp managed to implement the first condition, but he struggles with the remaining ones. Can you help him to verify the passwords?

Input
The first line contains a single integer t
 (1≤t≤1000
) — the number of testcases.

The first line of each testcase contains a single integer n
 (1≤n≤20
) — the length of the password.

The second line contains a string, consisting of exactly n
 characters. Each character is either a lowercase Latin letter or a digit.

Output
For each testcase, print "YES" if the given password is strong and "NO" otherwise.
*/

void solve()
{
    int n;
    string x;
    cin >> n >> x;
    string y = x;
    sort(y.begin(), y.end());
    if (x == y)
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