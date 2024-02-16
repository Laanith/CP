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
If we list all the natural numbers below  that are multiples of  or , we get  and . The sum of these multiples is .

Find the sum of all the multiples of  or  below .

Input Format

First line contains  that denotes the number of test cases. This is followed by  lines, each containing an integer, .

Constraints

Output Format

For each test case, print an integer that denotes the sum of all the multiples of  or  below .
*/


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        n--;
        ll sum=0;
        ll threesum = 0;
        ll fivesum = 0;
        ll fifteensum = 0;
        ll threenum;
        ll fivenum;
        ll fifteenum;
        if(n%3){
            threenum = n-n%3;
        }
        else threenum=n;
        threesum = (3*(threenum/3)*(threenum/3+1))/2;
        if(n%5){
            fivenum = n-n%5;
        }
        else {fivenum = n;}
        fivesum = (5*(fivenum/5)*(fivenum/5+1))/2;
        if(n%15) fifteenum=n-n%15;
        else fifteenum=n;
        fifteensum = (15*(fifteenum/15)*(fifteenum/15+1))/2;
        sum+=(threesum+fivesum-fifteensum);
        cout<<sum<<endl;

    }
    
    return 0;
}