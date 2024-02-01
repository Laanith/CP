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

/*!SECTION : Problem Description ::
A. Codeforces Checking
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a lowercase Latin character (letter), check if it appears in the string codeforces
.

Input
The first line of the input contains an integer t
 (1≤t≤26
) — the number of test cases.

The only line of each test case contains a character c
 — a single lowercase Latin character (letter).

Output
For each test case, output "YES" (without quotes) if c
 satisfies the condition, and "NO" (without quotes) otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).
*/

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
set<char> s = {'c', 'o', 'd', 'e', 'f', 'r', 's'};
int t;
cin >> t;
while(t--){
    char c;
    cin >> c;
    if(s.find(c) != s.end())
        PYES;
    else
        PNO;
    }

return 0 ;
}