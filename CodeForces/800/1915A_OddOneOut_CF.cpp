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
You are given three digits a
, b
, c
. Two of them are equal, but the third one is different from the other two.

Find the value that occurs exactly once.

Input
The first line contains a single integer t
 (1≤t≤270
) — the number of test cases.

The only line of each test case contains three digits a
, b
, c
 (0≤a
, b
, c≤9
). Two of the digits are equal, but the third one is different from the other two.

Output
For each test case, output the value that occurs exactly once.

*/

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int n=3;
        map<int,int> m;
        while (n--)
        {
            int r;
            cin>>r;
            m[r]++;
        }
        for(auto p : m){
            if(p.second==1) pint(p.first);
        }
    }
    

    return 0;
}