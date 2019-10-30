/*
** Author: Madhur Chauhan
** Time Complexity: 
**       O(NlogN) to build
**       O(1), O(logN) for query
*/
template<class T=int>
struct SparseTable {
	vector<vector<T>> st;
	int K=1; // K = ceil( log(N) )
	SparseTable(const vector<T>& V) {
		int N = V.size();
		for(int s=1; s<N; s<<=1) K++;
		st.assign(K, V);
		for(int j=1; j<=K; ++j)
			for(int i=0; i+(1<<j)<=N; ++i)
				// using f(X,Y) = min(X, Y)
				st[j][i]=min(st[j-1][i], st[j-1][i+(1<<(j-1))]);
	}
	
	// O(1)/query : if duplicating values in fuction is irrelevant
	// Examples: min, max, gcd, NOT: sum
	T query_fast(int l, int r) {
		assert(l <= r);
		int dep = 31 - __builtin_clz(r-l+1); // GCC specific
		return min(st[dep][l], st[dep][r-(1 << dep)+1]);
	}

	// O(log N)/query
	T query(int l, int r){
		assert(l <= r);
		long long ans = 1e17; // Change this
		for (int j = K; j >= 0; j--) {
			if ((1 << j) <= r - l + 1) {
				ans = min(ans, st[j][l]);
				l += 1 << j;
			}
		}
		return ans;
	}
};
