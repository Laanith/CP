#include<bits/stdc++.h>
#include<algorithm>
#define ll long long
#define PYES cout<<"YES"<<endl
#define PNO cout<<"NO"<<endl
#define PMINUS cout<<-1<<endl
#define vi vector<int>
#define vll vector<long long>
#define vpi vector<pair<int,int>>
#define vs vector<string>
#define qi queue<int>
#define si stack<int>
#define seti set<int>
#define unseti unordered_set<int>
#define pi pair<int,int>
#define ima INT_MAX
#define imi INT_MIN
#define siz size
#define vvi vector<vector<int>>
#define pb push_back
using namespace std;
void pv(vi A){cout << endl;for(auto x : A) cout << x <<' ';cout << endl;}
void pint(int A){cout<<endl<<A<<endl;}
void pp(pair<int,int> p){cout<<p.first<<' '<<p.second<<endl;}
void pvvi(vvi A){for(auto v : A){pv(v);}}



 
 
/*!SECTION : Problem Description ::
There are n concert tickets available, each with a certain price. Then, m customers arrive, one after another.
Each customer announces the maximum price they are willing to pay for a ticket, and after this, they will get a ticket with the nearest possible price such that it does not exceed the maximum price.
Input
The first input line contains integers n and m: the number of tickets and the number of customers.
The next line contains n integers h_1,h_2,\ldots,h_n: the price of each ticket.
The last line contains m integers t_1,t_2,\ldots,t_m: the maximum price for each customer in the order they arrive.
Output
Print, for each customer, the price that they will pay for their ticket. After this, the ticket cannot be purchased again.
If a customer cannot get any ticket, print -1.
Constraints

1 \le n, m \le 2 \cdot 10^5
1 \le h_i, t_i \le 10^9

Example
Input:
5 3
5 3 7 8 5
4 8 3

Output:
3
8
-1
*/
 
 
void solve(multiset<int>& tickets, int max_price) {
    auto it = tickets.upper_bound(max_price);
    if (it == tickets.begin()) {
        // No ticket available within max_price range
        cout << -1 << endl;
    } else {
        // Move iterator back to the largest ticket <= max_price
        --it;
        cout << *it << endl;
        tickets.erase(it); // Remove the ticket from the set
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    multiset<int> tickets;
    for (int i = 0; i < n; i++) {
        int price;
        cin >> price;
        tickets.insert(price);
    }

    for (int i = 0; i < m; i++) {
        int max_price;
        cin >> max_price;
        solve(tickets, max_price);
    }

    return 0;
}
