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
        
        
ll t;
t=1;
while(t--)
{
ll n,k;
cin>>n>>k;

ll arr[n];

ll sum=0;

ll i;
for(i=0;i<n;i++)
cin>>arr[i];
for(auto x:arr)
{
    sum+=x;

}
ll mx=sum;
ll j;
for(i=0;i<n;i++)
{
    ll lsum=0;
    for(j=i;j<n;j++)
    {
lsum+=arr[j];
mx=max(mx,sum-lsum+k*(j-i+1));
    }
}
    
cout<<mx<<endl;

}
    
return 0;
}
 


 


