#include<bits/stdc++.h>
#define ll long long
#include<algorithm>
#include<numeric>
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
Nikita is a student passionate about number theory and algorithms. He faces an interesting problem related to an array of numbers.

Suppose Nikita has an array of integers a
 of length n
. He will call a subsequence†
 of the array special if its least common multiple (LCM) is not contained in a
. The LCM of an empty subsequence is equal to 0
.

Nikita wonders: what is the length of the longest special subsequence of a
? Help him answer this question!

†
 A sequence b
 is a subsequence of a
 if b
 can be obtained from a
 by the deletion of several (possibly, zero or all) elements, without changing the order of the remaining elements. For example, [5,2,3]
 is a subsequence of [1,5,7,8,2,4,3]
.

Input
Each test contains multiple test cases. The first line of input contains a single integer t
 (1≤t≤2000
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤2000
) — the length of the array a
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — the elements of the array a
.

It is guaranteed that the sum of n
 over all test cases does not exceed 2000
.

Output
For each test case, output a single integer — the length of the longest special subsequence of a
.
*/

ll lcm(ll a, ll b) {
    return abs(a * b) / __gcd(a, b);
}

ll lcm_of_vector(const std::vector<int>& numbers) {
    return std::accumulate(numbers.begin(), numbers.end(), 1, lcm);
}




void solve(){
    vi A;
    int n;
    cin>>n;
    while (n--)
    {
        int r;
        cin>>r;
        A.push_back(r);
    }

    auto lcm_num = lcm_of_vector(A);
    while(find(A.begin(), A.end(), lcm_num) != A.end()){
        cout<<lcm_num<<endl;
        auto itr = find(A.begin(), A.end(), lcm_num);
        A.erase(itr);
        lcm_num = lcm_of_vector(A);
    }

    cout<<"Result : "<<A.size()<<endl<<endl;


    
}
 
 
 
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--) solve();
 
 
return 0 ;
}