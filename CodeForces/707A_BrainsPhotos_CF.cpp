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
Small, but very brave, mouse Brain was not accepted to summer school of young villains. He was upset and decided to postpone his plans of taking over the world, but to become a photographer instead.

As you may know, the coolest photos are on the film (because you can specify the hashtag #film for such).

Brain took a lot of colourful pictures on colored and black-and-white film. Then he developed and translated it into a digital form. But now, color and black-and-white photos are in one folder, and to sort them, one needs to spend more than one hour!

As soon as Brain is a photographer not programmer now, he asks you to help him determine for a single photo whether it is colored or black-and-white.

Photo can be represented as a matrix sized n × m, and each element of the matrix stores a symbol indicating corresponding pixel color. There are only 6 colors:

'C' (cyan)
'M' (magenta)
'Y' (yellow)
'W' (white)
'G' (grey)
'B' (black)
The photo is considered black-and-white if it has only white, black and grey pixels in it. If there are any of cyan, magenta or yellow pixels in the photo then it is considered colored.

Input
The first line of the input contains two integers n and m (1 ≤ n, m ≤ 100) — the number of photo pixel matrix rows and columns respectively.

Then n lines describing matrix rows follow. Each of them contains m space-separated characters describing colors of pixels in a row. Each character in the line is one of the 'C', 'M', 'Y', 'W', 'G' or 'B'.

Output
Print the "#Black&White" (without quotes), if the photo is black-and-white and "#Color" (without quotes), if it is colored, in the only line.
*/
 
 
 
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
bool blackandwhite = true;
bool inner_is_breaked = false;
int n,m;
cin>>n>>m;
for(int i = 0; i < n; i++){
    for(int j = 0; j < m ;j++){
        char s;
        cin>>s;
        if(s=='C' || s == 'M' || s == 'Y'){
            blackandwhite = false;
            inner_is_breaked = true;
            break;
        }
        else continue;
    }
    if(inner_is_breaked) break;
}

if(blackandwhite) cout<<"#Black&White"<<endl;
else cout<<"#Color"<<endl;
 
 
return 0 ;
}