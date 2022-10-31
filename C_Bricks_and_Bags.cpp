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
cin>>t;
while(t--)
{

   ll n;
   cin>>n;

   vector<ll> v1(n);

   ll i;
   for(i=0;i<n;i++)
   cin>>v1[i];
   map<ll,ll> m1;

   for(auto x:v1)
   {
    m1[x]++;
   }
   vector<ll> v;
   for(auto x:m1)
   {
    v.pb(x.first);
   }
   ll mx=0;
  sort(v.begin(),v.end());
  if(v.size()>=3)
  {
    
  for(i=0;i<v.size()-2;i++)
  {
    mx=max(mx,-2*v[i]+v[i+1]+v.back());
    mx=

  }
  cout<<mx<<endl;
  }
  else if(v.size()==1)
  {

   cout<<0<<endl;
  }
  else
  {
ll z=0;
    if(m1[v[0]]>1)
    {
z=max(z,v.back()*2-2*v[0]);
    }
    if(m1[v.back()]>1)
    {
        z=max(z,2*abs(v1[0]-v1[1]));
    }
    cout<<z<<endl;
  }


  


}
    
return 0;
}
 


 


