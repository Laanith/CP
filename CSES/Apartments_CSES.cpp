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
There are n applicants and m free apartments. Your task is to distribute the apartments so that as many applicants as possible will get an apartment.
Each applicant has a desired apartment size, and they will accept any apartment whose size is close enough to the desired size.
Input
The first input line has three integers n, m, and k: the number of applicants, the number of apartments, and the maximum allowed difference.
The next line contains n integers a_1, a_2, \ldots, a_n: the desired apartment size of each applicant. If the desired size of an applicant is x, he or she will accept any apartment whose size is between x-k and x+k.
The last line contains m integers b_1, b_2, \ldots, b_m: the size of each apartment.
Output
Print one integer: the number of applicants who will get an apartment.
Constraints

1 \le n, m \le 2 \cdot 10^5
0 \le k \le 10^9
1 \le a_i, b_i \le 10^9

Example
Input:
4 3 5
60 45 80 60
30 60 75

Output:
2
*/
 
 
void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    vi A(n), B(m);
    for(int i = 0 ; i < n; i++) cin>>A[i];
    for(int i = 0 ; i < m; i++) cin>>B[i];
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int i = 0, j = 0, count = 0;
    while(i<n && j < m){
        if(B[j]< A[i]-k) j++;
        else if(B[j]>A[i]+k) i++;
        else if (B[j]>=A[i]-k && B[j]<=A[i]+k){i++; j++; count++;}
    }
    cout<<count<<endl;
}
 
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
 
solve();
 
return 0 ;
}