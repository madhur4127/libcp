/*
**  Fenwick Tree / Binary Indexed Tree / BIT
**	Author: Madhur Chauhan
**	Time Complexity: 
**			O(logN)/query
**			O(N) to build
*/
struct FenwickTree {
	vector<ll> ft{0}; // FT using 1-based indexing
	// number - #elements
	FenwickTree(int n): ft(n+1,0) {}
	// vector - initial list where FT is constructed
	FenwickTree(const vector<int>& list) {
		ft.insert(ft.back(), list);
		for(int i=1; i<=(int)ft.size(); ++i){
			int idx=i+(i&-i);
			if(idx<=(int)ft.size())
				ft[idx]+=ft[i];
		}
	}
	void update(int pos, ll dif) {
		for (; pos < (int)ft.size(); pos |= pos + 1) 
			ft[pos] += dif;
	}
	ll query(int pos) { // sum of values in [0, pos]
		ll res = 0;
		for ( ++pos; pos; pos-=pos&-pos ) 
			res += ft[pos-1];
		return res;
	}
};
