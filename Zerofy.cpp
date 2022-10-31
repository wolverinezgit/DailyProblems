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

   ll arr[3];

   ll i;
   cin>>arr[0]>>arr[1]>>arr[2];

   priority_queue<ll> pq;

   for(auto x:arr)
   {
    if(x)
    pq.push(x);
   }


   if(pq.size()==1)
   cout<<"No"<<endl;
   else 
   {
    while(pq.size()>=2)
    {
        ll x1=pq.top();
        pq.pop();
        ll x2=pq.top();
        pq.pop();
    
        x1--;
        x2--;
        if(x1)
        pq.push(x1);
        if(x2)
        pq.push(x2);

    }
    if(pq.empty())
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
   }

   


}
    
return 0;
}
 


 


