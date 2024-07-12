#include <iostream>
typedef long long ll;
using namespace std;

ll fmin(ll n, ll m){
	return max(0LL, n - 2 * m);
}

ll fmax(ll n, ll m){
	ll i = 0LL;
	while((i * (i - 1) / 2 < m)) i++;
	return n - i;
}

int main(){
	ll n, m; cin >> n >> m; // n : number of vertexs, m : number of edges
	cout << fmin(n, m) << " " << fmax(n, m) << "\n";
	return 0;
}
