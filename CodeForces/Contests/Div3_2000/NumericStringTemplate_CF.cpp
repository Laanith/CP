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

void check(string & s, vi & A){
    map<char,int> charToInt;
    if(s.length()!=A.size()){PNO; return;}
    for(int i = 0; i < s.size(); i++){
        if(charToInt.find(s[i])==charToInt.end()){ charToInt[s[i]]=A[i]; continue;}
        if(A[i]!=charToInt[s[i]]){
            // cout<<s[i]<<endl;
            // for(auto p : charToInt) cout<<p.first<<" "<<p.second<<endl;
            PNO; return;}
    }
    PYES; return;
}
 
 
void solve() {
    int n; cin>>n;
    vi A(n);
    for(int i=0; i<n;i++) cin>>A[i];
    int m;
    cin>>m;
    vector<string> sArr(m);
    for(int i=0; i<m;i++) cin>>sArr[i];
    for(auto &s : sArr) check(s,A);
    
}
 
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
 
int t;
cin>>t;
while(t--) solve();
 
return 0 ;
}