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
B. Vlad and Shapes
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vladislav has a binary square grid of n×n
 cells. A triangle or a square is drawn on the grid with symbols 1
. As he is too busy being cool, he asks you to tell him which shape is drawn on the grid.

A triangle is a shape consisting of k
 (k>1
) consecutive rows, where the i
-th row has 2⋅i−1
 consecutive characters 1
, and the central 1s are located in one column. An upside down triangle is also considered a valid triangle (but not rotated by 90 degrees).
Two left pictures contain examples of triangles: k=4
, k=3
. The two right pictures don't contain triangles.
A square is a shape consisting of k
 (k>1
) consecutive rows, where the i
-th row has k
 consecutive characters 1
, which are positioned at an equal distance from the left edge of the grid.
Examples of two squares: k=2
, k=4
.
For the given grid, determine the type of shape that is drawn on it.

Input
The first line contains a single integer t
 (1≤t≤100
) — the number of test cases.

The first line of each test case contains a single integer n
 (2≤n≤10
) — the size of the grid.

The next n
 lines each contain n
 characters 0
 or 1
.

The grid contains exactly one triangle or exactly one square that contains all the 1
s in the grid. It is guaranteed that the size of the triangle or square is greater than 1
 (i.e., the shape cannot consist of exactly one 1).

Output
For each test case, output "SQUARE" if all the 1
s in the grid form a square, and "TRIANGLE" otherwise (without quotes).
*/


void solve() {

    int n; 
    cin>>n; 
    
    vector<vector<int>> grid(n, vector<int>(n)); 
    
    int count1, count2; 
    
    count1=count2=0; 
    
    int index= -1;
    
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){ 
            scanf("%1d",&grid[i][j]); 
            
        }
    }


    for (int i=0; i<n && index==-1; i++){
        for (int j=0; j<n; j++){ 
            if (grid[i][j]==1) { 
                count1++ ; 
                index= i; 
            }
        }
    }
    
    for (int j= 0; j<n; j++){
            if (grid[index+1][j]==1) count2++; 
    }

    if (count1== count2) {
            cout<<"SQUARE"<<endl;
            return; 
    }
    else {
            cout<<"TRIANGLE"<<endl; 
            return; 
    }
        
    
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}




