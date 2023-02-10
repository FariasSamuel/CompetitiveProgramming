	#include<bits/stdc++.h>
	#include <math.h>
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
		int x,y;
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				int valor;
				cin >> valor;
				if (valor == 1)
				{
					x = i;
					y = j;
				}
			}
		}
		int distance = abs(x-2) + abs(y-2);
		cout << distance << endl;
	}