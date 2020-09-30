#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i=0; i<n; ++i)
			cin >> a[i];
		int ans=0, tmp=0;
		for(int i=0; i<n; ++i) {
			tmp+=a[i];
			if(tmp>=k)
				tmp-=k;
			else {
				ans=i+1;
				break;
			}
		}
		if(ans==0)
			cout << "YES" << "\n";
		else 
			cout << "NO " << ans << "\n";
	}
}
