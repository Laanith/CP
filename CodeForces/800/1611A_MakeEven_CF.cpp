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
Polycarp has an integer n
 that doesn't contain the digit 0. He can do the following operation with his number several (possibly zero) times:

Reverse the prefix of length l
 (in other words, l
 leftmost digits) of n
. So, the leftmost digit is swapped with the l
-th digit from the left, the second digit from the left swapped with (l−1
)-th left, etc. For example, if n=123456789
 and l=5
, then the new value of n
 will be 543216789
.
Note that for different operations, the values of l
 can be different. The number l
 can be equal to the length of the number n
 — in this case, the whole number n
 is reversed.

Polycarp loves even numbers. Therefore, he wants to make his number even. At the same time, Polycarp is very impatient. He wants to do as few operations as possible.

Help Polycarp. Determine the minimum number of operations he needs to perform with the number n
 to make it even or determine that this is impossible.

You need to answer t
 independent test cases.

Input
The first line contains the number t
 (1≤t≤104
) — the number of test cases.

Each of the following t
 lines contains one integer n
 (1≤n<109
). It is guaranteed that the given number doesn't contain the digit 0.

Output
Print t
 lines. On each line print one integer — the answer to the corresponding test case. If it is impossible to make an even number, print -1.
*/

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int r;
        cin >> r;
        int dum = r;
        bool hasEven = false;
        string s = to_string(r);
        while (dum)
        {
            if ((dum % 10) % 2 == 0)
                hasEven = true;
            dum /= 10;
        }

        if (!hasEven)
            pint(-1);
        else
        {
            if ((r % 10) % 2 == 0)
                pint(0);
            else
            {
                if ((s[0] - '0') % 2 == 0)
                    pint(1);
                else
                    pint(2);
            }
        }
    }

    return 0;
}