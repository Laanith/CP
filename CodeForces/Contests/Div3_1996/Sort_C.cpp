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
    int n,q;
    cin>>n>>q;
    string s1,s2;
    cin>>s1>>s2;
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;
        vi m1(26), m2(26);
        string s1_slice = s1.substr(l,(r-l));
        string s2_slice = s2.substr(l,(r-l));
        cout<<s1_slice<<" "<<s2_slice<<endl;
        sort(s1_slice.begin(), s1_slice.end());
        sort(s2_slice.begin(), s2_slice.end());
        for(auto x : s1_slice){
            m1[x-'a']++;
        }
        for(auto x : s2_slice){
            m2[x-'a']++;
        }
        int count = 0;
        for(int i = 0 ; i < 26; i++){
            if(m1[i]!=m2[i]) count++;
        }

        cout<<count/2<<endl;




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