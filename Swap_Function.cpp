//FUCK RaTInGS In IT FOR THE EXPERIEnCE!!!
    #pragma GCC optimize("Ofast")
    #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
    #pragma GCC optimize("unroll-loops")
    #include <bits/stdc++.h> 
    using namespace std;
    #define ll long long 
    #define S second
   
    #define dbg(x)              cout<<#x<<"="<<(x)<<endl;
    #define dbg2(x,y)           cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<endl;
    #define dbg3(x,y,z)         cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<" "<<#z<<"="<<(z)<<endl;
    #define dbg4(x,y,z,w)       cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<" "<<#z<<"="<<(z)<<" "<<#w<<"="<<(w)<<endl;
    #define mp make_pair
    #define pb push_back
    #define endl                '\n'
   vector<ll> par(100001,-1);
 vector<ll> rnk(100001,-1);
   void init(ll n)
   {
    for(ll i=0;i<n;i++)
    {
        par[i]=i;
        rnk[i]=1;
    }
   }
   ll findpar(ll x)
   {

    if(x==par[x])
    return x;
    else
    return par[x]=findpar(par[x]);
   }

   void unite(ll x1,ll x2)
   {

    ll p1=findpar(x1);
    ll p2=findpar(x2);
    if(p1==p2)
    {
        return;

    }

    if(rnk[p1]>rnk[p2])
    {
        par[p2]=p1;
        rnk[p1]+=rnk[p2];
    }
    else
    {
        par[p1]=p2;
        rnk[p2]+=rnk[p1];
    }
   }
    int main()
    {
        
        
ll t;
t=1;
while(t--)
{

ll n,k;

cin>>n>>k;
init(n);
vector<ll> arr(n),cost(n);

ll i;
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
for(i=0;i<n;i++)
{
    cin>>cost[i];
}
vector<vector<ll>> e(n),c(n);

while(k--)
{
    ll x1,x2;cin>>x1>>x2;
    x1--;
    x2--;
    unite(x1,x2);
}
for(i=0;i<n;i++)
{
    ll p1=findpar(i);
   e[p1].pb(arr[i]);
   c[p1].pb(cost[i]);
}
ll ans=0;
for(i=0;i<n;i++)
{
    sort(c[i].rbegin(),c[i].rend());
    sort(e[i].begin(),e[i].end());
    for(ll j=0;j<e[i].size();j++)
    {
        ans=ans+(c[i][j]*e[i][j]);
    }
}
cout<<ans<<endl;

}
    
return 0;
}
 


 


