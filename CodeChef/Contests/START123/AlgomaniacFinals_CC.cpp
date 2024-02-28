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
Algomaniac finals, a part of Convolution Fest of Jadavpur University, will be held on March
17
17.
Shreyan can only go to Jadavpur University on March
�
X.

Print YAY if he can attend the Algomaniac finals and NO if he cannot.

Input Format
The first and only line of input contains one integer,
�
X, the day of march Shreyan can go to Jadavpur University.
Output Format
Output YAY if Shreyan can attend Algomaniac finals, and NO otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings YAY, yaY, yay, and Yay will all be treated as identical).

Constraints
1
≤
�
≤
31
1≤X≤31
*/


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    if(n==17) cout<<"YAY"<<endl;
    else PNO;
    return 0;
}