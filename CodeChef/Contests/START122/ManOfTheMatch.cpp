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
Man of the Match
In a cricket match, there are two teams, each comprising
11
11 players. The scorecard of the match lists the runs scored and wickets taken by each of these
22
22 players.

To determine the "Man of the Match", we assess each player's performance. Points are awarded to a player as follows:

Each run scored earns
1
1 point.
Every wicket taken earns
20
20 points.
The player with the highest total points is awarded the "Man of the Match" title.

You are given the scorecard of a cricket match, listing the contributions of all
22
22 players.
The players are numbered from
1
1 to
22
22. Find the "Man of the Match".
It is guaranteed that for all inputs to this problem, the "Man of the Match" is unique.

Note: A player who belongs to the losing team can also win the "Man of the Match" award.

Input Format
The first line of input will contain a single integer
�
T, denoting the number of test cases.
Each test case consists of
22
22 lines of input. The
�
i-th of these
22
22 lines contains two space-separated integers
�
�
A
i
​
  and
�
�
B
i
​
  — respectively, the runs scored and wickets taken by the
�
i-th player.
Output Format
For each test case, output on a new line a single integer
�
i
(
1
≤
�
≤
22
)
(1≤i≤22) denoting the index of the player with the maximum score.

The tests for this problem are designed such that there will be exactly one player with the maximum score.

Constraints
1
≤
�
≤
1000
1≤T≤1000
0
≤
�
≤
200
0≤A≤200
0
≤
�
≤
10
0≤B≤10
There will be exactly
1
1 player with the maximum score.
*/



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int i = 0;
        int maxindex=imi;
        int max_score = imi;
        while(i<22){
            int runs,wickets;
            cin>>runs>>wickets;
            int score = runs + 20*wickets;
            if(score>max_score){
                max_score=score;
                maxindex = i+1; }

            i++;
        }
        cout<<maxindex<<endl;
    }
    return 0;
}