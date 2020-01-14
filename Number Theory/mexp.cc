/*
 * Performs Modular Exponentiation: (x ^ n) % m
 * Time Complexity:  O(log n)
 * Space Complexity: O(1)
 * Author: Common Forklore
 */

inline ll mexp(ll x, ll n, ll m = MOD) {
    ll res = 1;
    x %= m;
    while (n) {
		if (n & 1) res = (res * x) % m;
		n >>= 1;
		x = (x * x) % m;
    }
    return res;
}
