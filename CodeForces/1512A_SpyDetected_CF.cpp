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
You are given an array a
 consisting of n
 (n≥3
) positive integers. It is known that in this array, all the numbers except one are the same (for example, in the array [4,11,4,4]
 all numbers except one are equal to 4
).

Print the index of the element that does not equal others. The numbers in the array are numbered from one.

Input
The first line contains a single integer t
 (1≤t≤100
). Then t
 test cases follow.

The first line of each test case contains a single integer n
 (3≤n≤100
) — the length of the array a
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤100
).

It is guaranteed that all the numbers except one in the a
 array are the same.

Output
For each test case, output a single integer — the index of the element that is not equal to others. 
*/
 

 
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    map<int,int> m;
    vi A;
    while(n--){
        int r;
        cin>>r;
        m[r]++;
        A.pb(r);
    }
    int spy=imi;
    for(auto p : m){
        if(p.second==1) spy = p.first;
    }

    cout<<  distance(A.begin(), find(A.begin(), A.end(), spy)) +1 <<endl;

}

 
 
return 0 ;
}