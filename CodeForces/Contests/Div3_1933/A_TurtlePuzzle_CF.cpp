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
 of n
 integers. You must perform the following two operations on the array (the first, then the second):

Arbitrarily rearrange the elements of the array or leave the order of its elements unchanged.
Choose at most one contiguous segment of elements and replace the signs of all elements in this segment with their opposites. Formally, you can choose a pair of indices l,r
 such that 1≤l≤r≤n
 and assign ai=−ai
 for all l≤i≤r
 (negate elements). Note that you may choose not to select a pair of indices and leave all the signs of the elements unchanged.
What is the maximum sum of the array elements after performing these two operations (the first, then the second)?

Input
The first line of the input contains a single integer t
 (1≤t≤1000
) — the number of test cases. The descriptions of the test cases follow.

The first line of each test case contains a single integer n
 (1≤n≤50
) — the number of elements in array a
.

The second line of each test case contains n
 integers a1,a2,…,an
 (−100≤ai≤100
) — elements of the array.

Output
For each test case, output the maximum sum of the array elements after sequentially performing the two given operations.
*/
 
 

 
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int sum=0;
    while(n--){
        int r;
        cin>>r;
        sum += (abs(r));
    }
    cout<<sum<<endl;
} 
 
return 0 ;
}