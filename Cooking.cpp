//FUCK RaTInGS In IT FOR THE EXPERIEnCE!!!
    #pragma GCC optimize("Ofast")
    #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
    #pragma GCC optimize("unroll-loops")
    #include <bits/stdc++.h> 
    using namespace std;
    #define ll long long 
    #define S second
    #define v vector
    #define dbg(x)              cout<<#x<<"="<<(x)<<endl;
    #define dbg2(x,y)           cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<endl;
    #define dbg3(x,y,z)         cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<" "<<#z<<"="<<(z)<<endl;
    #define dbg4(x,y,z,w)       cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<" "<<#z<<"="<<(z)<<" "<<#w<<"="<<(w)<<endl;
    #define mp make_pair
    #define pb push_back
    #define endl                '\n'
    
    int main()
    {
        
        
ll m,n,k;
cin>>m>>n>>k;
multiset<pair<ll,ll>> m1;
ll i;
for(i=0;i<m;i++)
{
    ll x;
    cin>>x;

    m1.insert({x,1});
}
for(i=0;i<n;i++)
{

    ll x;
    cin>>x;
    m1.insert({x,2});
}
ll ans1=0,ans2=0;
while(k>=0&&!m1.empty())
{
auto [x,y]=*(m1.begin());
m1.erase(m1.begin());
if(y==1)
{
    k-=x;
if(k>=0)
{
   
    ans1++;
}

}
else
{
    k-=x;if(k>=0)
{
   
ans2++;
}

}
}
cout<<ans1+ans2<<endl;

    
return 0;
}
 


 


