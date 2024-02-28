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
Jadavpur University wants to find out the number of rooms they need to accommodate the teams coming for their fest.
A total of
�
N colleges are coming, where, the
�
�
ℎ
i
th
  college has a team of
�
�
A
i
​
  members.

Each room can accommodate at most
2
2 people. Moreover, people from different colleges dislike staying together.

Find the minimum number of rooms Jadavpur University will have to use to accommodate everyone, such that a room never contains people from different colleges.

Input Format
The first line of input will contain a single integer
�
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains one integer,
�
N, the number of colleges coming for the fest.
The next line contains
�
N space-separated integers,
�
1
,
�
2
,
…
,
�
�
A
1
​
 ,A
2
​
 ,…,A
N
​
 , the number of people coming from each college.
Output Format
For each test case, output on a new line, the minimum number of rooms needed to accommodate all students, such that a room never contains people from different colleges.

Constraints
1
≤
�
≤
100
1≤T≤100
1
≤
�
≤
100
1≤N≤100
1
≤
�
�
≤
100
1≤A
i
​
 ≤100
*/



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int rooms = 0;
        while(n--){
            int r;
            cin>>r;
            if(r%2) rooms += (r/2+1);
            else rooms+=r/2;
        }
        cout<<rooms<<endl;
    }
    return 0;
}