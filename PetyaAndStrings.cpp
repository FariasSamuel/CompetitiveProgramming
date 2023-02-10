	#include<bits/stdc++.h>
	using namespace std;
	void solve();
	int main()
	{
	   ios_base::sync_with_stdio(false);cin.tie(NULL);
	   
	   #ifndef ONLINE_JUDGE
	   freopen("input.txt", "r", stdin);
	   freopen("error.txt", "w", stderr);
	   freopen("output.txt", "w", stdout);
	   #endif
	   
	   int t=1;
	   //cin>>t;
	   while(t--)
	   {
	      solve();
	      cout<<"\n";
	   }
	   
	   cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
	   return 0;
	}
	void solve()
	{
		string a,b;
		int sa = 0;
		int sb = 0;
		cin >> a >> b;

		for (int i = 0; i < a.size(); ++i)
		{
			sa += (int)tolower(a[i])-'a';
			sb += (int)tolower(b[i])-'a';
		}
		//cout << sa << " " << sb;
		if(sa > sb)
			cout << 1 << endl;
		else if(sa < sb)
			cout << -1 << endl;
		else
			cout << 0 << endl;
	}