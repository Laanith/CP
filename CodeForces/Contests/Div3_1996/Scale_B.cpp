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
B. Scale
time limit per test2 seconds
memory limit per test256 megabytes
Tina has a square grid with n
 rows and n
 columns. Each cell in the grid is either 0
 or 1
.

Tina wants to reduce the grid by a factor of k
 (k
 is a divisor of n
). To do this, Tina splits the grid into k×k
 nonoverlapping blocks of cells such that every cell belongs to exactly one block.

Tina then replaces each block of cells with a single cell equal to the value of the cells in the block. It is guaranteed that every cell in the same block has the same value.

For example, the following demonstration shows a grid being reduced by factor of 3
.
*/
 
 
void solve() {
    int n,k,r;
    cin>>n>>k;
    int div = n/k;
    int arr[div][div];
    for(int i=0; i<n;i++){ 
            for(int j=0; j < n; j++)
            {
                if((j+1)%k!=0 || (i+1)%k != 0) cin>>r;

                else cin>>arr[i/k][j/k];
            }   
    }

    for(int i = 0 ; i < div ; i++){
        for(int j=0; j<div; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
 
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
 
int t;
cin>>t;
while(t--) solve();
 
return 0 ;
}