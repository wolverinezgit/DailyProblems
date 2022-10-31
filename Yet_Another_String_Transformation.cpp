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
        
        
ll n;
string s;
ll x;
cin>>n>>s>>x;
vector<ll> v1;
ll i;

char ch='.';
ll cc=0;
for(i=0;i<n;i++)
{
if(ch==s[i])
cc++;
else
{
    v1.pb(cc);
    cc=1;
    ch=s[i];
}
}
ll f=-1;
ll ans=0;

if(s[0]!=s.back()||x==1)
{

    for(auto x:v1)
    {
        ans+=(x/2);
    }
    ans+=cc/2;

    ans=ans*x;

    cout<<ans<<endl;

}
else
{
for(i=1;i<v1.size();i++)
{
    ans+=v1[i]/2;

}
ans=ans*x;

ll z=0;
if(!v1.empty())
z=v1[0];
ans=ans+((z+cc)/2)*(x-1);
ans+=(z/2);
ans+=(cc/2);

    cout<<ans<<endl;
}
return 0;
}
 


 


