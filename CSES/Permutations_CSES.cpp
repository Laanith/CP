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

/*!SECTION : Problem Description ::
A permutation of integers 1,2,\ldots,n is called beautiful if there are no adjacent elements whose difference is 1.
Given n, construct a beautiful permutation if such a permutation exists.
Input
The only input line contains an integer n.
Output
Print a beautiful permutation of integers 1,2,\ldots,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".
Constraints

1 \le n \le 10^6

Example 1
Input:
5

Output:
4 2 5 3 1
Example 2
Input:
3

Output:
NO SOLUTION
*/

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << n << endl;
    }
    else if (n <= 3 && n>=2)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        for (int i = 1; i <= n / 2; i++)
        {
            cout << i * 2 << " ";
        }
        if (n % 2)
        {
            for (int i = 0; i <= n / 2; i++)
            {
                cout << i * 2 + 1 << " ";
            }
        }
        else
        {
            for (int i = 0; i < n / 2; i++)
            {
                cout << i * 2 + 1 << " ";
            }
        }
    }
    cout << endl;

    return 0;
}