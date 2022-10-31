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
        
        
string s;

cin>>s;

ll k1;
cin>>k1;

int z=1;
int limit=1000;
if(s.size()<=3)
{
    limit=stoi(s);
}
int i,j,k;
vector<int> v1;
for(int i=1;i<=9;i++)
{
    for(int j=1;j<=9;j++)
    {
        for(int k=1;k<=9;k++)
        {
           int zzz=(i*10+j)*10+k;
           v1.pb(zzz);
        }
    }
}
int ans=0;
for(auto x:v1)
{
    if(x<=limit)
    ans++;
}
cout<<ans<<endl;
    
return 0;
}
 


 


