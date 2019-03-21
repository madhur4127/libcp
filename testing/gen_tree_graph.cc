#include "testlib.h"

#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <ctime>
#include <climits>
#include <cassert>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <map>
#include <bitset>
#include <utility>
#include <algorithm>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

int main(int argc, char* argv[])
{
	cerr<<"cmd args: 'N M' as nodes and edges resp";
    registerGen(argc, argv, 1);

    int n = atoi(argv[1]), m=stoi(argv[2]);
    int t = rnd.next(1,(int)1e9);

    vector<int> p(n);
    forn(i, n)
        if (i > 0)
            p[i] = rnd.wnext(i, t);

    printf("%d %d\n", n,m);
    vector<int> perm(n);
    forn(i, n)
        perm[i] = i;
    shuffle(perm.begin() + 1, perm.end());
    set<pair<int,int>> edges;

    for (int i = 1; i < n; i++){
        if (rnd.next(2))
            edges.insert(make_pair(perm[i], perm[p[i]]));
        else
            edges.insert(make_pair(perm[p[i]], perm[i]));
	}
	for(;(int)edges.size()<m;){
		int u=rnd.next(0,n-1), v=rnd.next(0,n-1);
		if(u!=v) edges.insert(make_pair(u,v));
	}
	vector<pair<int,int>> edj(edges.begin(), edges.end());
	shuffle(edj.begin(), edj.end());
	for(auto& [u,v]: edj) printf("%d %d\n",u+1,v+1);

    return 0;
}

