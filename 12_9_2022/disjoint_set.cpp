
int parent[100000];
int rank[100000];
int n;
void makeSet()
{
    for(int i=0;i<n;i++)
    {
        parent[i] = i;
        rank[i] = 0;
    }
}
int findPar(int node)
{
    if(node == parent[node]) return node;

    return parent[node] = findPar(parent[node]);
}
void Union(int u,int v)
{
    u = findPar(u);
    v = findPar(v);
    if(rank[u]<rank[v]) parent[u] = v;
    else if(rank[v]<rank[u]) parent[v] = u;
    else
    {
        parent[u] = v;
        rank[v]++;
    }
}
void main()
{
    makeSet();
}