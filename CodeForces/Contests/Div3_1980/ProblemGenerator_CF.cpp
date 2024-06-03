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
 
*/
 
 
void solve() {
    int n,m;
    cin>>n>>m;
    string x;
    string a = "ABCDEFG";
    map<char, int> charmap;
    for (auto c : a)
        charmap[c]++;
    for (auto &p : charmap)
        p.second--;
    cin>>x;
    for(auto c : x) charmap[c]++;
    int total = 0;
    for(auto &p : charmap){
        if(p.second < m) total += (m-p.second);
    }
    cout<<total<<endl;
}
 
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
 
int t;
cin>>t;
while(t--) solve();
 
return 0 ;
}