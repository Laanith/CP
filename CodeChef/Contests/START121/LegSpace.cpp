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
There are
�
N students including Chef in a school. The school bus has
�
M seats, and every student in the school travels on the bus.
It is guaranteed that
�
≤
�
N≤M, so that everyone will have a seat.

Chef is happy when the school bus is not full.
Given
�
N and
�
M, your task is to find out whether Chef will be happy.

Input Format
The only line of input will contain two space-separated integers
�
N and
�
M, denoting the number of students in the school and the number of seats in the school bus respectively.

Output Format
For each test case, output on a new line the answer: YES, if Chef will be happy, and NO otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings YeS, yEs, yes, and YES will all be treated as identical).


Sample 1:
Input
Output
2 3
YES
Explanation:
There are
2
2 students and
3
3 seats on the bus.
So, there will be one empty seat on the bus and Chef will be happy.

Sample 2:
Input
Output
6 6
NO
Explanation:
There are
6
6 students and
6
6 seats on the bus.
The bus will be full and Chef will not be happy.
*/



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    if(n<m) PYES;
    else {PNO;}

    return 0;
}