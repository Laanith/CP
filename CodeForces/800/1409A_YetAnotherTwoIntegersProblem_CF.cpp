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
You are given two integers a
 and b
.

In one move, you can choose some integer k
 from 1
 to 10
 and add it to a
 or subtract it from a
. In other words, you choose an integer k∈[1;10]
 and perform a:=a+k
 or a:=a−k
. You may use different values of k
 in different moves.

Your task is to find the minimum number of moves required to obtain b
 from a
.

You have to answer t
 independent test cases.

Input
The first line of the input contains one integer t
 (1≤t≤2⋅104
) — the number of test cases. Then t
 test cases follow.

The only line of the test case contains two integers a
 and b
 (1≤a,b≤109
).

Output
For each test case, print the answer: the minimum number of moves required to obtain b
 from a
.
*/



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int r = abs(b-a);
        if(r%10) cout<<r/10+1<<endl;
        else cout<<r/10<<endl;
    }
    return 0;
}