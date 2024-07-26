#include<bits/stdc++.h>
#include<algorithm>
#define ll long long
#define PYES cout<<"YES"<<endl
#define PNO cout<<"NO"<<endl
#define PMINUS cout<<-1<<endl
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vs vector<string>
#define qi queue<int>
#define si stack<int>
#define seti set<int>
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

A. Legs
time limit per test2 seconds
memory limit per test256 megabytes
It's another beautiful day on Farmer John's farm.

After Farmer John arrived at his farm, he counted n
 legs. It is known only chickens and cows live on the farm, and a chicken has 2
 legs while a cow has 4
.

What is the minimum number of animals Farmer John can have on his farm assuming he counted the legs of all animals?

Input
The first line contains single integer t
 (1≤t≤103
) — the number of test cases.

Each test case contains an integer n
 (2≤n≤2⋅103
, n
 is even).

Output
For each test case, output an integer, the minimum number of animals Farmer John can have on his farm.
*/
 
 
void solve() {
    int n;
    cin>>n;
    if(n%4) cout<<n/4+1<<endl;
    else cout<<n/4<<endl;
}
 
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
 
int t;
cin>>t;
while(t--) solve();
 
return 0 ;
}