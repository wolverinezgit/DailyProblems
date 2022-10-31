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
    
    int main()
    {
        
        
ll t;
cin>>t;
while(t--)
{
ll n;
cin>>n;
ll ans=0;
vector<ll> v1;
ll i;
for(i=0;i<n;i++)
{
    ll x,y;
    cin>>x>>y;
    ans+=min(x,y)*2;
    v1.pb(max(x,y));
}

dbg(ans);
sort(v1.rbegin(),v1.rend());
ans+=v1[0];
ans+=v1.back();

for(ll i=1;i<v1.size();i++)
{
ans+=(v1[0]-v1[i]);
}
cout<<ans<<endl;
    


}
    
return 0;
}
 


 


