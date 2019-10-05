// USES {2,3,5} as basis and takes ~25% of operations
// as compared to trial division method (wiki, CP-Algo)
vector<ll> wheel_factor(ll n) {
  vector<ll> factorization;
  for (int d : {2, 3, 5}) {
    while (n % d == 0) { factorization.push_back(d); n /= d; }
  }
  static array<int, 8> increments = {4, 2, 4, 2, 4, 6, 2, 6};
  int i = 0;
  for (ll d = 7; d * d <= n; d += increments[i++]) {
    while (n % d == 0) { factorization.push_back(d); n /= d; }
    if (i == 8) i = 0;
  }
  if (n > 1) factorization.push_back(n);
  return factorization;
}

// for all divisors
auto factors=wheel_factor(x); // Change x
set<int> divisors{1};
for(int& d: facs){
	set<int> now=divs;
	for(auto i: divs){
		now.insert(i*d);
	}
	divs=now;
}
