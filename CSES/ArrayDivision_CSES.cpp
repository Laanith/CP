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
void pv(vll A){cout << endl; for(auto x : A) cout<<x<<' '; cout<<endl;}



 
 
/*!SECTION : Problem Description ::
Time limit: 1.00 s
Memory limit: 512 MB



You are given an array containing n positive integers.
Your task is to divide the array into k subarrays so that the maximum sum in a subarray is as small as possible.
Input
The first input line contains two integers n and k: the size of the array and the number of subarrays in the division.
The next line contains n integers x_1,x_2,\ldots,x_n: the contents of the array.
Output
Print one integer: the maximum sum in a subarray in the optimal division.
Constraints

1 \le n \le 2 \cdot 10^5
1 \le k \le n
1 \le x_i \le 10^9

Example
Input:
5 3
2 4 7 3 5

Output:
8

Explanation: An optimal division is [2,4],[7],[3,5] where the sums of the subarrays are 6,7,8. The largest sum is the last sum 8.
*/
 
 
void solve(){
    int n,k;
    cin>>n>>k;
    vi A(n);
    for(int i = 0 ; i < n; i++) cin>>A[i];
    vector<ll> prefixSum(n);
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum +=A[i];
        prefixSum[i] = sum;
    }

    
}
 
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
 
solve();
 
return 0 ;
}