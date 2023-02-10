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
		int n,t;
		string fila;
		cin >> n >> t;
		cin >> fila;

		for (int i = 0; i < t; ++i)
		{
			string copia = fila;
			for (int j = 0; j < n-1; ++j)
			{
				
				if (fila[j] == 'B' && fila[j+1] == 'G')
				{
					copia[j] = fila[j+1];
					copia[j+1] = fila[j];
					//cout << i << " " << j << endl;
				}
			}

			fila = copia;
		}

		for (int i = 0; i < n; ++i)
		{
			cout << fila[i];
		}
	}