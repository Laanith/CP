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

Scored
01
Hrs
34
Min
Healthy Sleep
At IIITA, students have diverse sleep patterns, and there isn't a fixed duration for their daily sleep.
Typical scientific recommendations suggest that the duration of a healthy sleep is
8
8 hours per day.
As you begin your journey as a programmer, you've been tasked by the renowned programmer of IIITA, Pavitra Pandey, with your first project.

Your assignment is to write a program that takes as input the number of hours a student sleeps per day, and judges how good their sleep schedule is. Specifically,

If the student sleeps for strictly less than
8
8 hours, the program should output LESS.
If the student sleeps for exactly
8
8 hours, the program should output PERFECT.
If the student sleeps for strictly more than
8
8 hours, the program should output MORE.
Can you write such a program?

Input Format
The only line of input contains a single integer
�
H, denoting the number of hours a student sleeps per day.
Output Format
Output a single string containing the answer:

LESS if the student doesn't get enough sleep.
PERFECT if the student sleeps the perfect amount of time.
MORE if the student sleeps too much.
Each character of the output may be printed in either uppercase or lowercase, i.e, the strings LESS, less, LeSs, and lesS will all be treated as equivalent.
*/

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h;
    cin>>h;
    if (h < 8)
        cout << "LESS" << endl;
    else if (h == 8)
        cout << "PERFECT" << endl;
    else
        cout << "MORE" << endl;


    return 0;
}