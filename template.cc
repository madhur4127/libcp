#include "bits/stdc++.h"
using namespace std;
/////////////////// TYPES & MACROS ///////////////////////////////
#define mp make_pair
#define eb emplace_back
#define pb push_back
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define vv vector
#define exist(s,e) (s.find(e)!=s.end())
#define SZ(x) ((int)(x).size())
#define int ll
#define el '\n'
template<class T> bool inline rmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool inline rmx(T &a, T b) { return a < b ? (a = b, true) : false; }
typedef long long ll; typedef long double ld; typedef double dd; typedef pair<int, int> pii;
const ll INFLL=0x7f7f7f7f7f7f7f7f, MOD=1e9+7; const int INF=0x7f7f7f7f;

//////////////////// DEBUG /////////////////////////////////////////
#define D(x) cerr<<#x<<" is:\t"<<x<<'\n';
#define DD(x,y) cerr<<'('<<#x<<','<<#y<<") are:\t"<<x<<' '<<y<<'\n';
#define DDD(x,y,z) cerr<<'('<<#x<<','<<#y<<','<<#z<<") are:\t"<<x<<' '<<y<<' '<<z<<'\n';

/////////////////// VARIABLES & FUNCTIONS//////////////////////////
vv<vv<int>> adj; vv<int> vis, color; 
int dx8[]={0,1,1,1,0,-1,-1,-1}, dy8[]={1,1,0,-1,-1,-1,0,1},dx4[]={0,1,0,-1}, dy4[]={1,0,-1,0};
inline ll mexp(ll x,ll n,ll m=MOD){ll res=1;x%=m;while(n){if(n&1)res=(res*x)%m;n>>=1;x=(x*x)%m;}return res;}
inline ll gcd(ll a, ll b){if(a<0) a=-a; if(b<0) b=-b; while (a>0 && b>0){if(a>b)a%=b;else b%=a;}return a+b;}

///////////////////// MAIN STARTS //////////////////////////////////
int32_t main(void){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
cout<<fixed;cerr<<fixed; cout<<setprecision(10); cerr<<setprecision(3);
mt19937 genr(chrono::high_resolution_clock::now().time_since_epoch().count());



return 0;
}
