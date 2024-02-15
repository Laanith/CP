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
A. Sasha and the Beautiful Array
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Sasha decided to give his girlfriend an array a1,a2,…,an
. He found out that his girlfriend evaluates the beauty of the array as the sum of the values (ai−ai−1)
 for all integers i
 from 2
 to n
.

Help Sasha and tell him the maximum beauty of the array a
 that he can obtain, if he can rearrange its elements in any way.

Input
Each test consists of multiple test cases. The first line contains a single integer t
 (1≤t≤500
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer n
 (2≤n≤100
) — the length of the array a
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — the elements of the array a
.

Output
For each test case, output a single integer — the maximum beauty of the array a
 that can be obtained.

Example
*/



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi A;
        int i = 0;
        while(n--){
            int r;
            cin>>r;
            A.pb(r);
            i++;
        }


        cout<<*max_element(A.begin(),A.end())-*min_element(A.begin(), A.end())<<endl;
    }

    return 0;
}