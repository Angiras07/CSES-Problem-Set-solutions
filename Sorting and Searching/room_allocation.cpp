//basic template
#include <bits/stdc++.h> 
using namespace std; 
#define ll long long
const ll mod = 1e9+7;
const ll mod2= 998244353;
const ll INF = 1ll<<62;
const long double pi=3.1415926535897932384626433832795;
#define fo(i,n) for( ll i=0;i<n;++i)
#define fos(j,i,n) for(ll j=i;j<n;++j)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(v) v.begin(),v.end()
#define dis(k) cout << k << endl
#define ret(k) { dis(k); return;}
#define ror(i,n) for( ll i= n-1;i>=0;--i)
#define ve vector
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define setzero(a) memset(a,0,sizeof(a))
#define setinf(a) memset(a,0x7f,sizeof(a))
#define setminf(a) memset(a,0xc0,sizeof(a))
typedef ve< ll > vi;
typedef ve< vi > vvi;
typedef pair< ll ,ll > ii;
 
//weird debugging stuff
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
	enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
		sim > struct rge { c b, e; };
		sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
		sim > auto dud(c* x) -> decltype(cerr << *x, 0);
		sim > char dud(...);
		struct debug {
#ifdef LOCAL
			~debug() { cerr << endl; }
			eni(!=) cerr << boolalpha << i; ris; }
		eni(==) ris << range(begin(i), end(i)); }
		sim, class b dor(pair < b, c > d) {
			ris << "(" << d.first << ", " << d.second << ")";
		}
sim dor(rge<c> d) {
	*this << "[";
	for (auto it = d.b; it != d.e; ++it)
		*this << ", " + 2 * (it == d.b) << *it;
	ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define im(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
const ll nax=3*1e5+5;
void solve1(){
	ll n;
	cin >> n;
	array<ll,3> a[n];
	fo(i,n) cin >> a[i][1] >> a[i][0],a[i][2]=i;
	sort(a,a+n);
	set<array<ll,2>> s;
	ll ans[n];
	fo(i,n){
		auto it=s.lower_bound({a[i][1]});
		if(it!=s.begin()){
			it--;
			ans[a[i][2]]=(*it)[1];
			s.erase(it);
		}
		else ans[a[i][2]]=s.size()+1;
		s.insert({a[i][0],ans[a[i][2]]});
	}
	dis(s.size());
	fo(i,n) cout << ans[i] << " ";
	cout << endl;
}
 
/*Don't just sit and hope that God will solve this
  fucking do something, try to observe or solve it a different way.
  Use that pen and paper.
  If nothing works take a deep breath and start again.*/
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t=1;
	//int tc=1;
	//cin >> t;		
	while(t--){
		//cout << "Case #" << tc << ": ";
		//tc++;
		solve1();
	}
	return 0;
}
