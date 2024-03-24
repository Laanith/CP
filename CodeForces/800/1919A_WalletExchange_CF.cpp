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
Alice and Bob are bored, so they decide to play a game with their wallets. Alice has a
 coins in her wallet, while Bob has b
 coins in his wallet.

Both players take turns playing, with Alice making the first move. In each turn, the player will perform the following steps in order:

Choose to exchange wallets with their opponent, or to keep their current wallets.
Remove 1
 coin from the player's current wallet. The current wallet cannot have 0
 coins before performing this step.
The player who cannot make a valid move on their turn loses. If both Alice and Bob play optimally, determine who will win the game.

Input
Each test contains multiple test cases. The first line contains a single integer t
 (1≤t≤1000
) — the number of test cases. The description of the test cases follows.

The first and only line of each test case contains two integers a
 and b
 (1≤a,b≤109
) — the number of coins in Alice's and Bob's wallets, respectively.

Output
For each test case, output "Alice" if Alice will win the game, and "Bob" if Bob will win the game.
*/

void solve()
{
    int a, b;
    cin >> a >> b;
    if ((a + b) % 2)
        cout << "Alice" << endl;
    else
        cout << "Bob" << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}