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
 
*/
 
 
void solve() {
    int n;
    cin>>n;
    vi A(n);
    for(int i = 0; i < n; i++) cin>>A[i];
    if(n==1) PYES;
    set<int> s;
    s.insert(A[0]);
    for(int i = 1; i < n; i++){
    //  cout<<"Iteration :"<<i<<endl;
    //  cout<<"Element :"<<A[i]<<endl;
    //  cout<<boolalpha<<"Left :"<<(s.find(A[i]+1)!=s.end())<<endl;
    //  cout<<boolalpha<<"Right :"<<(s.find(A[i]-1)!=s.end())<<endl;
    //  cout<<"Set : ";
    //  for ( auto x : s) cout<<x<<" ";
    //  cout<<endl;
     if(s.find(A[i]+1)!=s.end() || s.find(A[i]-1)!=s.end()){s.insert(A[i]); continue;}
     else {PNO; return;}
    }
    PYES; return;
}
 
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
 
int t;
cin>>t;
while(t--) solve();
 
return 0 ;
}