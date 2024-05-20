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
void pvvi(vvi A){for(auto v : A){pv(v);}}



 
 
/*!SECTION : Problem Description ::
B. Symmetric Encoding
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Polycarp has a string s
, which consists of lowercase Latin letters. He encodes this string using the following algorithm:

first, he constructs a new auxiliary string r
, which consists of all distinct letters of the string s
, written in alphabetical order;
then the encoding happens as follows: each character in the string s
 is replaced by its symmetric character from the string r
 (the first character of the string r
 will be replaced by the last, the second by the second from the end, and so on).
For example, encoding the string s
="codeforces" happens as follows:

the string r
 is obtained as "cdefors";
the first character s1
='c' is replaced by 's';
the second character s2
='o' is replaced by 'e';
the third character s3
='d' is replaced by 'r';
...
the last character s10
='s' is replaced by 'c'.
The string r
 and replacements for s
="codeforces".
Thus, the result of encoding the string s
="codeforces" is the string "serofedsoc".

Write a program that performs decoding — that is, restores the original string s
 from the encoding result.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤2⋅105
) — the length of the string b
.

The second line of each test case contains a string b
 of length n
, consisting of lowercase Latin letters — the result of encoding the original string s
.

It is guaranteed that the sum of the values of n
 over all test cases in the test does not exceed 2⋅105
.

Output
For each test case, output the string s
 from which the encoding result b
 was obtained.
*/
 

void solve(){
    int n;
    string x;
    cin>>n>>x;
    set<char> s;
    string set_string_copy ;
    string set_string = "";
    for(auto c:x){
        s.insert(c);
    }
    for(auto se : s){
        set_string+=se;
    }
    set_string_copy = set_string;
    reverse(set_string.begin(), set_string.end());
    string reversed_string = "";
    for(auto c : x){
        int idx = set_string_copy.find(c);
        reversed_string += set_string[idx];
    }
    cout<<reversed_string<<endl;
}

 
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while (t--)
{
solve();
}
 
 
return 0 ;
}