#include <bits/stdc++.h>
#define ll long long
#include <algorithm>
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define PYES cout << "YES" << endl
#define PNO cout << "NO" << endl
#define vs vector<string>
#define qi queue<int>
#define si stack<int>
#define pi pair<int, int>
#define ima INT_MAX
#define imi INT_MIN
#define siz size()
#define vvi vector<vector<int>>
#define pb push_back
using namespace std;
void pv(vi A)
{
    cout << endl;
    for (auto x : A)
        cout << x << ' ';
    cout << endl;
}
void pint(int A) { cout << endl
                        << A << endl; }
void pp(pair<int, int> p) { cout << p.first << ' ' << p.second << endl; }
void pvvi(vvi A)
{
    for (auto v : A)
    {
        pv(v);
    }
}

/*!SECTION : Problem Description ::
Time limit: 1.00 s
Memory limit: 512 MB



Given a string, your task is to generate all different strings that can be created using its characters.
Input
The only input line has a string of length n. Each character is between a–z.
Output
First print an integer k: the number of strings. Then print k lines: the strings in alphabetical order.
*/

void solve(string x, int left,int right,set<string> & str){
    if(left==right){
        str.insert(x);
    }

    else {
        for (int i = left; i <= right; ++i) {
            swap(x[left], x[i]);
            solve(x, left + 1, right, str);
            swap(x[left], x[i]);
        }
    }
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string x;
    set<string> string_set;
    cin>>x;
    vs str;
    solve(x,0,x.length()-1,string_set);
    cout<<string_set.size()<<endl;
    for(auto s: string_set){
        cout<<s<<endl;
    }


    return 0;
}