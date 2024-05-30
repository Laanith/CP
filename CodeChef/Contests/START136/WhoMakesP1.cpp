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
Who Makes P1
Tyro and Dom are fighting over who makes the first problem of the contest. Both of them are very lazy so they don't want to make it.

Tyro has a patience level of
�
A, meaning he will only be convinced on the
�
�
ℎ
A
th
  time when Dom asks him to make the problem.
Dom, on the other hand, has decided to convince Tyro at most
�
B times. If Tyro is not convinced by the
�
�
ℎ
B
th
  time, Dom will proceed to make it himself.

Given the values of
�
A and
�
B, find out who will end up making the problem.

Input Format
The first and only line of input contains
2
2 integers,
�
A and
�
B - Tyro's patience level, and the number of times Dom tries to convince Tyro respectively.
Output Format
For each test case, output on a new line, Dom or Tyro corresponding to who ends up making the problem.

You can print each character in uppercase or lowercase. For example, the strings DOM, dom, Dom, and dOM are considered identical.

Constraints
1
≤
�
,
�
≤
10
1≤A,B≤10
Sample 1:
Input
Output
5 5
Tyro
Explanation:
Dom will convince Tyro for at most
5
5 times. Tyro agrees on the
5
�
ℎ
5
th
  time and makes the problem.

Sample 2:
Input
Output
4 3
Dom
Explanation:
Dom will convince Tyro for at most
3
3 times. However, Tyro has decided to agree on the
4
�
ℎ
4
th
  time. Thus, Dom makes the problem.

Did you like the problem statement?
18 users found this helpful
More Info
Time limit1 secs
Memory limit1.5 GB
Source Limit50000 Bytes

*/

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a <= b)
        cout << "Tyro" << endl;
    else
        cout << "Dom" << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}