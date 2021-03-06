#include<bits/stdc++.h>
#include <regex>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

#define X first
#define Y second
#define sz(v) (int)(v).size()
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define compress(v) sort(all(v)), (v).erase(unique(all(v)), (v).end())
#define OOB(x, y) ((x) < 0 || (x) >= n || (y) < 0 || (y) >= m)

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

template<typename T> istream& operator>> (istream& in, vector<T>& i) { for (auto& i : i) in >> i; return in; }
template<typename T> istream& operator>> (istream& in, pair<T, T>& i) { in >> i.X >> i.Y; return in; }

int main() {
	fastio;
	int N; cin >> N;
	regex r(R"(^[A-F]{0,1}A{1,}F{1,}C{1,}[A-F]{0,1}$)");
	smatch match;
	while (N--) {
		string s; cin >> s;
		//if (regex_match(s, match, r)) {
		//	for (auto mtc : match)
		//		cout << mtc << " ";
		//}
		regex_match(s, r) ? cout << "Infected!\n" : cout << "Good\n";
	}
	return 0;
}