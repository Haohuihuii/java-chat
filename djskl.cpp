#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n)  for(int i = a; i <= n; i++)
#define per(i, n, a)  for(int i = n; i >= a; i--)
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define PII map<int,int>
#define PI pair<int,int>
#define VI vector<int>
#define VL vector<long long>
#define VC vector<char>
#define fi first
#define se second
typedef long long ll;
typedef unsigned long long ull;
const int maxn = 1e5+5;
void solve(){
	int begin, endd;
	ll a, b; cin >> a >> b;
	ll aa = a, bb = b;
	int numa = 0, numb = 0;
	while(aa>0){
		aa/=10;
		numa++;
	}
	while(bb>0){
		bb/=10;
		numb++;
	}
	string acopy = to_string(a);
	string bcopy = to_string(b);
	int ans = 0;
	int dis = bcopy[0]-'0'-(acopy[0]-'0')-1;
	if(dis>0){
		begin = acopy[0]-'0', endd = bcopy[0]-'0';
		for(int i = begin+1; i <= endd-1; i++){
			ans+=pow(i,numb);
		}
	}
	vector<int>qian;
	vector<int>bbb;
	for(int i = numa-1; i >= 0;i --){
		if(acopy[i]-'0'< begin){
			int num = begin-(acopy[i]-'0');
			qian.push_back(num);
		}
	}
	for(int i = numa-1; i >= 0;i --){
		if(acopy[i]-'0'< endd){
			int num = endd-(acopy[i]-'0');
			bbb.push_back(num);
		}
	}
	int qian1 = 1;
	for(auto u : qian){
		if(u!=0){
			qian1*=u;
		}
	}
	int hou = 1;
	for(auto u : bbb){
		if(u!=0){
			hou*=u;
		}
	}
	cout << numa << endl;
	cout << numb << endl;
	cout << ans;//-qian1-hou;
	return ;
}
int main()
{
	IOS
	int t = 1;
	//cin >> t;
	while(t--)
		solve();
	return 0;
}
