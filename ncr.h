//////////////// COMPUTE COMBINATIONS /////////////////
int ncr(int n, int r, int m=MOD){
	const static int LIM=2e5;
	static vector<int> fac(LIM+1), ifac(LIM+1);
	static bool cached=false;
	if(!cached){
		fac[0]=fac[1]=ifac[0]=ifac[1]=1;
		for(int i=2;i<=LIM;++i) fac[i]=(1LL*i*fac[i-1])%m;
		ifac[LIM]=mexp(fac[LIM],m-2,m);
		for(int i=LIM-1;i>1;--i) ifac[i]=(1LL*(i+1)*ifac[i+1])%m;
		cached=true;
	}
	return ((1LL*fac[n]*ifac[r])%m*ifac[n-r])%m;
}
