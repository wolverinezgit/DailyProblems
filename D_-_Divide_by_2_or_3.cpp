
	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define endl "\n"
	#define ll long long int
	#define vi vector<int>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<int,int>
	#define pll pair<long long, long long>
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define f first
	#define s second
	
	using namespace std;
	int main()
	{
		std::ios::sync_with_stdio(false);
		ll n;
		cin>>n;

		ll arr[n];

		ll i,j;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}


		
map<ll,ll> cost,m1;
ll gg=0;
for(auto x:arr)
{
	gg=__gcd(gg,x);
}
ll cc=0;

while(gg%3==0)
{
	cc++;
	gg/=3;
}
while(gg%2==0)
{
	cc++;
	gg/=2;
}
cc=cc*n;

	for(i=0;i<n;i++)
	{

		ll x=arr[i];
ll z2=0,z3=0;

		while(x%3==0)
		{
			x/=3;
			z3++;

		}
		while(x%2==0)
		{
			x/=2;
			z2++;
		}
		m1[x]++;
		cost[x]+=(z2+z3);
		
	}
ll ans=1e18;
	for(auto x:m1)
	{

		if(x.second==n)
		{
ans=min(ans,cost[x.first]-cc);
		}
	}
	if(ans==1e18)
		cout<<-1<<endl;
	else

		cout<<ans<<endl;


	}
