#include<bits/stdc++.h>
#include<algorithm>
#define ll long long
#define PYES cout<<"YES"<<endl
#define PNO cout<<"NO"<<endl
#define PMINUS cout<<-1<<endl
#define vi vector<int>
#define vll vector<long long>
#define vpi vector<pair<int,int>>
#define vs vector<string>
#define qi queue<int>
#define si stack<int>
#define seti set<int>
#define unseti unordered_set<int>
#define pi pair<int,int>
#define ima INT_MAX
#define imi INT_MIN
#define siz size
#define vvi vector<vector<int>>
#define pb push_back
using namespace std;
void pv(vi A){cout << endl;for(auto x : A) cout << x <<' ';cout << endl;}
void pint(int A){cout<<endl<<A<<endl;}
void pp(pair<int,int> p){cout<<p.first<<' '<<p.second<<endl;}
void pvvi(vvi A){for(auto v : A){pv(v);}}



 
 
/*!SECTION : Problem Description ::
A. Make All Equal
time limit per test1 second
memory limit per test256 megabytes
You are given a cyclic array a1,a2,…,an
.

You can perform the following operation on a
 at most n−1
 times:

Let m
 be the current size of a
, you can choose any two adjacent elements where the previous one is no greater than the latter one (In particular, am
 and a1
 are adjacent and am
 is the previous one), and delete exactly one of them. In other words, choose an integer i
 (1≤i≤m
) where ai≤a(imodm)+1
 holds, and delete exactly one of ai
 or a(imodm)+1
 from a
.
Your goal is to find the minimum number of operations needed to make all elements in a
 equal.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤500
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤100
) — the length of the array a
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤n
) — the elements of array a
.

Output
For each test case, output a single line containing an integer: the minimum number of operations needed to make all elements in a
 equal.
*/
 
 
void solve() {
    int n;
    cin>>n;
    vi A(n);
    for(int i = 0; i < n; i++) cin>>A[i];
    sort(A.begin(), A.end());
    int med;
    if(n%2) med = A[n/2];
    else med =( A[n/2]+A[n/2 + 1])/2;
    ll sum = 0;
    for(int x : A) sum += abs(x-med);
    cout<<"Ans : "<<sum<<endl;

}
 
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
 
int t;
cin>>t;
while(t--) solve();
 
return 0 ;
}