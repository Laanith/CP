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
A. Square
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
A square of positive (strictly greater than 0
) area is located on the coordinate plane, with sides parallel to the coordinate axes. You are given the coordinates of its corners, in random order. Your task is to find the area of the square.

Input
Each test consists of several testcases. The first line contains one integer t
 (1≤t≤100
) — the number of testcases. The following is a description of the testcases.

Each testcase contains four lines, each line contains two integers xi,yi
 (−1000≤xi,yi≤1000
), coordinates of the corners of the square.

It is guaranteed that there is a square with sides parallel to the coordinate axes, with positive (strictly greater than 0
) area, with corners in given points.

Output
For each test case, print a single integer, the area of the square.
*/


 
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);

int t;
cin >> t;
while(t--){
    int a, b;
    cin >> a >> b;
    int sid = 3;
    int sidsize = 0;
    while(sid--){
        int a1, b1;
        cin >> a1 >> b1;
        if(a == a1){
            sidsize = int(abs(b - b1));
        }
        else if (b == b1) {
            sidsize = int(abs(a - a1));
        }
        else 
            continue;
    }

    cout << sidsize*sidsize << endl;
}

return 0 ;
}