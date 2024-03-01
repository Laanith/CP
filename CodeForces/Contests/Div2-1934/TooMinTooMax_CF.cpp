#include<bits/stdc++.h>
#define ll long long
#include<algorithm>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define PYES cout<<"YES"<<endl
#define PNO cout<<"NO"<<endl
#define vs vector<string>
#define qi queue<int>
#define si stack<int>
#define pi pair<int,int>
#define ima INT_MAX
#define imi INT_MIN
#define siz size()
#define vvi vector<vector<int>>
#define pb push_back
using namespace std;
void pv(vi A){cout << endl;for(auto x : A) cout << x <<' ';cout << endl;}
void pint(int A){cout<<endl<<A<<endl;}
void pp(pair<int,int> p){cout<<p.first<<' '<<p.second<<endl;}
void pvvi(vvi A){for(auto v : A){pv(v);}}



 
 
/*!SECTION : Problem Description ::
A. Too Min Too Max
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given an array a
 of n
 elements, find the maximum value of the expression:

|ai−aj|+|aj−ak|+|ak−al|+|al−ai|
where i
, j
, k
, and l
 are four distinct indices of the array a
, with 1≤i,j,k,l≤n
.

Here |x|
 denotes the absolute value of x
.

Input
The first line contains one integer t
 (1≤t≤500
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer n
 (4≤n≤100
) — the length of the given array.

The second line of each test case contains n
 integers a1,a2,…,an
 (−106≤ai≤106
).

Output
For each test case, print a single integer — the maximum value.
*/
 
 

 
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vi A(n,0);
    int i=0;
    while(i<n){
        cin>>A[i];
        i++;
    }

    sort(A.begin(), A.end());

    cout<<abs(A[n-1]-A[0])+abs(A[n-2]-A[1])+abs(A[1]-A[n-1])+abs(A[0]-A[n-2])<<endl;
 

    
}

return 0;
 

}