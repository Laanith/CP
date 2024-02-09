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
You are given an array of n integers, and your task is to find two values (at distinct positions) whose sum is x.
Input
The first input line has two integers n and x: the array size and the target sum.
The second line has n integers a_1,a_2,\dots,a_n: the array values.
Output
Print two integers: the positions of the values. If there are several solutions, you may print any of them. If there are no solutions, print IMPOSSIBLE.
Constraints

1 \le n \le 2 \cdot 10^5
1 \le x,a_i \le 10^9

Example
Input:
4 8
2 7 5 1

Output:
2 4
*/



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n,sum;
    cin>>n>>sum;
    vi A;
    set<ll> S;
    while(n--){
        ll r;
        cin>>r;
        A.pb(r);
        S.insert(r);
    }

    ll ind1 = imi;
    ll ind2 = imi;
    bool found = false;
    for(int i=0;i<A.siz();i++){
        if(S.find(sum-A[i]) != S.end()){
            ind1 = i+1;
            auto f = find(A.begin(), A.end(), sum-A[i]);
            ind2 = distance(A.begin(), f)+1;
            if(ind1 == ind2){
                continue;
            }
            else {
                found=true;
                break;
            }
        }
    }

    if(found){
        cout<<ind1<<" "<<ind2<<endl;
    }

    if(!found){
        cout<<"IMPOSSIBLE"<<endl;
    }



    return 0;
}