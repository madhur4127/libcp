typedef struct _dsu{
  std::vector<int> par, rank;
  //MEMBER FUNCTIONS
  _dsu(int n){
    par.resize(n);
    rank.resize(n);
    for(int i=0;i<n;++i) {
      rank[i]=0;
      par[i]=i;
    }
  }
  int find(int x){
    return x==par[x]?x:par[x]=find(par[x]);
  }
  void merge(int x, int y){
    x=find(x), y=find(y);
    if(x==y) return ;
    rank[x]>rank[y]?par[y]=x:par[x]=y;
    if(rank[x]==rank[y]) rank[y]++;
  }
} dsu;
