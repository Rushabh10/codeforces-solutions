#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	vector<int> v;
	vector<pair<int, int>> vp;
	for(int i=0; i<n; i++)
	{
	    int p;
	    cin>>p;
	    v.push_back(p);
	    vp.push_back(make_pair(p, i));
	}
	sort(v.begin(), v.end(), greater<int>());
	sort(vp.begin(), vp.end());
	int shots = 0;
	for(int i=0; i<n; i++)
	{
	    shots += v[i]*i + 1;
	}
	cout<<shots<<endl;
	for(int i=n-1; i>=0; i--)
	{
	    cout<<vp[i].second+1<<" ";
	}
	return 0;
}