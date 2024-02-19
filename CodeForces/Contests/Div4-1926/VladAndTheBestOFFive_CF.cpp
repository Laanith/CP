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
Vladislav has a string of length 5
, whose characters are each either A
 or B
.

Which letter appears most frequently: A
 or B
?

Input
The first line of the input contains an integer t
 (1≤t≤32
) — the number of test cases.

The only line of each test case contains a string of length 5
 consisting of letters A
 and B
.

All t
 strings in a test are different (distinct).

Output
For each test case, output one letter (A
 or B
) denoting the character that appears most frequently in the string.
*/



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        ll sumofsum = 0;
        ll n;
        cin>>n;
        for(ll i=1; i <= n; i++){
            if(i<10) sumofsum+=i;
            else {
                ll i_copy = i;
                while (i_copy > 0)
                {
                    sumofsum += i_copy % 10;
                    i_copy = i_copy / 10;
                }
            }
        }
        cout<<sumofsum<<endl;
    }


    

    return 0;
}