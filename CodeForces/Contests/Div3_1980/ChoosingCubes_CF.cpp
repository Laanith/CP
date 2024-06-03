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
    int n,f,k;
    cin>>n>>f>>k;
    f--;
    int i=0;
    vi A(n);
    while(++i<=n) cin>>A[i-1];
    vi orig = A;
    sort(A.begin() , A.end(), greater<int>());
    int left = 0;
    int right = A.size() - 1;
    int ind;
    while (left <= right)
    {
        ind = (left + right) / 2; 

        if (A[ind] == orig[f])
        {       
            break; 
        }
        else if (A[ind] < orig[f])
            right = ind - 1;
        else{            
            left = ind + 1;
        }
    }
    int start_ind = ind;
    int end_ind = ind;
    while(orig[f] == A[start_ind] && start_ind>-1) start_ind--;
    while (orig[f] == A[end_ind] && end_ind < A.size()) end_ind++;
    start_ind++;
    end_ind--;
    if(k-1<start_ind) PNO;
    if(k-1>= start_ind && k-1<end_ind) cout<<"MAYBE"<<endl;
    if(k-1>=end_ind) PYES;
}
 
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
 
int t;
cin>>t;
while(t--) solve();
 
return 0 ;
}