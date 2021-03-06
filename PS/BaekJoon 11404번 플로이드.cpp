#include <bits/stdc++.h>
#define int int64_t
#define pii pair<int,int>
#define tiii tuple<int,int,int>
#define INF 987654321
using namespace std;

int dist[100 + 1][100 + 1];

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M; cin >> N >> M;
	for (int i = 1; i <= N; i++) for (int j = 1; j <= N; j++) if (i != j) dist[i][j] = INF;
	for (int i = 0; i < M; i++) {
		int from, to, value; cin >> from >> to >> value;
		dist[from][to] = min(dist[from][to],value);
	}

	auto Floyd_Washall = [&]()->void{
		for (int k = 1; k <= N; k++) for (int i = 1; i <= N; i++) for (int j = 1; j <= N; j++) 
		if (dist[i][k] != INF && dist[k][j] != INF) dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
	};

	Floyd_Washall();

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (dist[i][j] == INF)cout << "0 ";
			else cout << dist[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}