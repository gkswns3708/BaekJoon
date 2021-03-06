#include<bits/stdc++.h>
#include <regex>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

string s,s1;
int N;

void solution() {
	bool possible = false;
	bool flag = false;
	deque<int> deq;
	string temp;
	stringstream ss;
	ss.str(s1);
	char a;
	while (ss >> a) {
		int x;
		if (ss >> x) deq.push_back(x);
	}
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'R') flag = !flag;
		else {
			if (deq.empty()) {
				possible = true;
				break;
			}
			else {
				if (flag) deq.pop_back();
				else deq.pop_front(); 
			}
		}
	}
	if (possible) cout << "error\n";
	else {
		cout << "["; 
		if (!deq.empty()) {
			if (flag) {
				for (int i = deq.size()-1; i > 0 ; i--) cout << deq[i] << ",";
				cout << deq[0]<<"";
			}
			else {
				for (int i = 0; i < deq.size() - 1; i++) cout << deq[i] << ",";
				cout << deq[deq.size() - 1];
			}
		}
		cout << "]\n";
	}
}

void input() {
	int TC; cin >> TC;
	while (TC--) {
		cin >> s;
		cin >> N;
		cin >> s1;
		solution();
	}
}

int main() {
	fastio;
	input();
}