/**
 * Author: Lukas Polacek
 * Date: 2009-10-26
 * License: CC0
 * Source: folklore
 * Description: Disjoint-set data structure.
 * Time: $O(\alpha(N))$
 */
struct DSU {
	std::vector<int> e;
	DSU(int n) : e(n, -1) {}
	bool same_set(int a, int b) { return find(a) == find(b); }
	int size(int x) { return -e[find(x)]; }
	int find(int x) { return e[x] < 0 ? x : e[x] = find(e[x]); }
	bool merge(int a, int b) {
		a = find(a), b = find(b);
		if (a == b) return false;
		// make a as parent of b
		if (e[a] > e[b]) swap(a, b); // size of dsu(a) is -e[a] 
		e[a] += e[b]; e[b] = a;
		return true;
	}
};
